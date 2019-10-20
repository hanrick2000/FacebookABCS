#include <iostream>
#include <string>
using namespace std;


bool palindrone(string str){

  int left = 0;
  int right = str.length() - 1;

  while (right > left){
    if (str[left++] != str[right--]){
      return false; 
    }
  }
  return true; 
}


int main(){

  string str = "aba";
  string str1 = "abb";
  cout << palindrone(str) << "\n";
  cout << palindrone(str1) << "\n";

}

// deleing one character
class Solution {
public:
    
  bool isPalindrome(string s, int left, int right){

    while (right > left){
      if (s[left++] != s[right--]){
	return false; 
      }
    }
    return true; 
        
        
  }
    
  bool validPalindrome(string s) {
    // abca 
    int left = 0, right = s.length() - 1;
    while (left < right) {
      if (s[left] != s[right]) {
	return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
      }
      left++;
      right--;
    }
    return true;
  }
    
  
};
