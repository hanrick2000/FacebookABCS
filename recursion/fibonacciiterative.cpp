#include <iostream>
using namespace std;



int fib(int number){

  if (number == 0){
    return 0;
  }
  if (number == 1){
    return 1; 
  }
  return fib(number-2) + fib(number-1);
  
}

int fibiterative(int number){

  int previouspreviousnumber = 0;
  int  previousnumber = 0;
  int currentnumber = 1;
  for (int i = 1; i < number; i++){
    previouspreviousnumber = previousnumber;
    previousnumber = currentnumber;
    currentnumber = previousnumber + previouspreviousnumber;
  }
  return currentnumber;
  
}

int main(){

  cout << fib(9) << "\n";
  cout << fibiterative(9);
  
}
