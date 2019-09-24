#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int f(int m, int n) {
  if (m==1 || n==1) {
    return 1;
  }
  return f(m, n-1) + f(m-1, n);
}

int main() {
    
    int M, N;
   
    cin >> M;
    cout << " ";
    cin >> N;
    
    cout << "O(m*n)";
     
    return 0;
}
