// Complete the makingAnagrams function below.
// make each string equal and count the deletions
int makingAnagrams(char* s1, char* s2) {
    
    
    // initalization of variables 
    
    int deletions = 0;
    int s1_frequency[26] = {0};
    int s2_frequency[26] = {0};
  
    // end of NULL character
    for (int i=0; s1[i]!='\0'; i++) {
        s1_frequency[s1[i] - 'a']++;
    } 
    
     // end of NULL character
    for (int i=0; s2[i]!='\0'; i++) {
        s2_frequency[s2[i] - 'a']++;
    } 
  
    // see the number of deletions needed
    for (int i=0; i<26; i++) {
        deletions += abs(s1_frequency[i] - s2_frequency[i]);
    }
    
    return deletions; 
        
  
}
