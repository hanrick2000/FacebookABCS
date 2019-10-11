

















#include <iostream>
#include <stack>
using namespace std;

bool paren(string str){

  stack<char> s;
  for (char c: str){
    if (c == '('){
      s.push(c);
    }
    else if (c == ')'){
      if (s.empty()){
	return false; 
      }
      s.pop();
      // break;
    }
   }

  return s.empty();

}


int main(){

   string str1 = "(())()";
 string str2 = "(()";


  cout << paren(str1) << "\n" << paren(str2);
  

}
