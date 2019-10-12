#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct tree_node{

  tree_node l;
  tree_node r;
  int data; 
};


void level_traversal(tree_node t, vector<tree_node> v){


  queue<tree_node> q;
  q.push(t);
  
  if (!t){
    return;
  }

  while (!q.empty()){
    v.push_back(q.front());
    if (q.front()->left){
      q.push(q.front()->left);
    }
    if (q.front()->right){
      q.push(q.front()->right);
    }
    q.pop();
  }
  
}
