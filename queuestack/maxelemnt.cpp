#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    stack<int> s;
    int N;
    int q;
    int max = 0;
    int number;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> q;

        if (q == 1) {
            cin >> number;
            if (number > max) {
                s.push(number);
                max = number;
            }
            else{
                s.push(max);
            }
        }
        else if (q == 2) {
            s.pop();
            if (s.empty()){
                max = 0;
            }
            else if (s.top() != max){
                max = s.top();
            }
        }
        else if (q == 3) {
            cout << max << endl;
        }
    }
    return 0;
}
