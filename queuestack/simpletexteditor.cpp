#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main() {
    
    int N; 
    cin >> N;
    stack<string> stk;
    string st;
    
    while (N--){
        int type;
        cin >> type;
        if (type == 1){
            string w; 
            cin >> w;
            stk.push(st);
            st += w;
        }
        else if (type == 2){
            int k;
            cin >> k;
            stk.push(st);
            st.erase(st.length() - k);
        }
        
        else if (type == 3){
            int k;
            cin >> k;
            cout << st[k - 1] << "\n";
        }
        
        else {
            st = stk.top();
            stk.pop();
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
