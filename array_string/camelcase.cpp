#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    
    int count = 1;
    for (int i = 0; i < s.length(); i++){
        if (isupper((s[i]))){
            count++;
        }
    }
    return count; 


}
