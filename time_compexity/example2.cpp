// geometic serires type

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bar(int n) {
  int count = 0;
  for (int i = n; i > 0; i /= 2) {
    for (int j = 0; j < i; j++) {
      count += 1;
    }
  }
  return count;
}

int main() {
    int N; 
    cin >> N; 
    cout << "O(n)";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
