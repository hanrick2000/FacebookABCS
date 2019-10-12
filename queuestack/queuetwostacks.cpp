#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int N;
    cin >> N;
    int number;
    int q;
    stack<int> en;
    stack<int> de;
    while (N--){
        cin >> q;
        if (q == 1){
            cin >> number;
            de.push(number);
        }
        else {
            if (en.empty()){
                while (!de.empty()){
                    en.push(de.top());
                    de.pop();
                }
            }
            if (!en.empty()){
                if (q == 2){
                    en.pop();
                }
                if (q == 3){
                    cout << en.top() << "\n";
                }
                
            }
            
        }
    }

   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
