#include <iostream>
#include <string>
#include <unordered_map>
#include <ap>

using namespace std;

string removeDuplicates(string str){
    
    unordered_map<string, int> m;
    string str1 = "";
    
    for (int i = 0; i < str.length(); i++){
        m[str[i]]++;
        if ((m.find([str[i]]) != m.end()) && !(str.find(str[i])){
            str1 += str[i];
        }
    }
    return str1;
    

}

int main(){

  string str = "ccbabacc";
  cout << removeDuplicates(str);
    

}
