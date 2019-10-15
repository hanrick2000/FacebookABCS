#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;


unordered_map<node*, int> cnt; //how many times has been executed
// if 0 then have not started
// 1 then left
// 2 then right
// 3 then process and print data 


void traversalinorder(Node *root){


  stack<node*> s;
  s.push(root);

  Node *curr = s.top();

  if (curr == NULL){ // if empty then continue stack
    s.pop();
    continue;
  }

  // inorder left root right 
  if (cnt[curr] == 0){
    s.push(curr->left);
  }

  else if (cnt[curr] == 1){
    cout << curr->val << " ";
  }

  else if (cnt[curr] == 2){
    s.push(curr->right);
  }

  else{
    s.pop();
  }

  cnt[curr]++;

  
}




void traversalpreorder(Node *root){


  stack<node*> s;
  s.push(root);

  Node *curr = s.top();

  if (curr == NULL){ // if empty then continue stack
    s.pop();
    continue;
  }

 if (cnt[curr] == 0){
    cout << curr->val << " ";
  }

 else if (cnt[curr] == 1){
    s.push(curr->left);
  }

  else if (cnt[curr] == 2){
    s.push(curr->right);
  }

  else{
    s.pop();
  }

  cnt[curr]++;

  
}




void traversalpostorder(Node *root){


  stack<node*> s;
  s.push(root);

  Node *curr = s.top();

  if (curr == NULL){ // if empty then continue stack
    s.pop();
    continue;
  }



  if (cnt[curr] == 0){
    s.push(curr->left);
  }

  else if (cnt[curr] == 1){
    s.push(curr->right);
  }

   if (cnt[curr] == 2){
    cout << curr->val << " ";
  }

  else{
    s.pop();
  }

  cnt[curr]++;

  
}
