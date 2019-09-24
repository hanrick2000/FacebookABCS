int qux(int n) {
  int a = 0;
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      a = a + i + j;
    }
  }
  return a;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    cout << "O(n^2)";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


