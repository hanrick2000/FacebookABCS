vector<int> reverseArray(vector<int> a) {
    
    vector<int> reverse;
    for (int i = a.size() - 1; i >=0; i--){
        reverse.push_back(a[i]);
        
    }
    return reverse;

}
