#include <bits/stdc++.h>

using namespace std;


#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string str) {

    stack<char> s; 
    char x; 
  
 
    for (int i=0; i<str.length(); i++) { 
        if (str[i]=='('||str[i]=='['||str[i]=='{') { 
            
            s.push(str[i]); 
        } 
  
        if (s.empty()) {
           return "NO"; 
        }
  
        switch (str[i]) { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x =='{' || x=='[') 
                return "NO"; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return "NO"; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return "NO"; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    if (s.empty()){
        return "YES";
    } 
    
    return "NO";
   
   
} 
  



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


// Complete the isBalanced function below.
string isBalanced(string s) {
    
    stack<char> stk;
    
    for (char c: s){
        if ((c == '[') || (c == '{') || (c == '(')){
            stk.push(c);
        }
        else if ((c == ']') && (stk.top() == '[')){
            stk.pop();
        }
        else if ((c == ')') && (stk.top() == '(')){
            stk.pop();
        }
        else if ((c == '}') && (stk.top() == '{')){
            stk.pop();
        }
        else{
            return "NO";
        }
    }
    
    if (!(stk.empty())){
        return "NO";
    }
    return "YES";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
