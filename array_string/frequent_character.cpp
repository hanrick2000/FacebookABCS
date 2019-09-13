#include <iostream>
#include <map>
#include <string>

using namespace std;

string getFrequent(string str){

  string mostfrequentchar = "";

  int maxcount = 0;
  map<char, int> a;

  for (int i = 0; i < str.length(); i++){
    a[str[i]]++;
    if (maxcount < a[str[i]]) { 
            maxcount = a[str[i]]; 
            mostfrequentchar = str[i]; 
        } 
    } 
  
   return mostfrequentchar;

}

int main(){

  string str = "aaabbcccdde";
  cout << getFrequent(str);

  
}
