// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int res = 0;
    for(int i = 0; i < ar.size(); i++) {
        for(int j = i + 1; j < ar.size(); j++) {
            if((ar[i] + ar[j]) % k == 0){
                res++;
            }
        }
    }
    
    return res; 
}


 1 2 3 4 5 6
 k = 5

 1 2 3 4 0 1
int countKdivPairs(int A[], int n, int K) 
{ 
    // Create a frequency arra 2y to count 
    // occurrences of all remainders when 
    // divided by K 
    int freq[K] = { 0 }; 
  
    // Count occurrences of all remainders 
    for (int i = 0; i < n; i++) 
        ++freq[A[i] % K]; 
  
    // If both pairs are divisible by 'K' 
    int sum = freq[0] * (freq[0] - 1) / 2; 
  
    // count for all i and (k-i) 
    // freq pairs 
    for (int i = 1; i <= K / 2 && i != (K - i); i++) 
        sum += freq[i] * freq[K - i]; 
    // If K is even 
    if (K % 2 == 0) 
        sum += (freq[K / 2] * (freq[K / 2] - 1) / 2); 
    return sum; 
} 
  
