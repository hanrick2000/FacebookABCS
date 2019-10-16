
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;;

/*The tree node has data, left child and right child 
  class Node {
  int data;
  Node* left;
  Node* right;
  };


  int height(Node* root){
    
  if ( root == NULL ){
  return -1;
  }
  else{
  return 1 + max(height(root->left), height(root->right));
  }

    
  }*/


class node  
{  
public: 
  int data;  
  node* left;  
  node* right;  
};  
  

int maxDepth(node* root){

  int sum; 
  if (root == NULL)  
    return 0;  
  else
    {  
      return 1 + max(maxDepth(root->left), maxDepth(root->right));
      
    }

   
}  
  
/* Helper function that allocates a new node with the  
   given data and NULL left and right pointers. */
node* newNode(int data)  
{  
  node* Node = new node(); 
  Node->data = data;  
  Node->left = NULL;  
  Node->right = NULL;  
      
  return(Node);  
}  
      
// Driver code     
int main()  
{  
  node *root = newNode(1);  
  
  root->left = newNode(2);  
  root->right = newNode(3);  
  root->left->left = newNode(4);  
  root->left->right = newNode(5);  
      
  cout << "Height of tree is " << maxDepth(root);  
  return 0;
}



// iteratielvye using queue

struct Node 
{ 
    struct Node *left; 
    int data; 
    struct Node *right; 
};


int iterativeheight(Node *root){
  if (root == NULL){
    return 0;
  }
  queue<Node*> q;
  q.push(root);
  int height = 0;

  while(1){
    int nodecount = q.size(); // number of nodes in queu is queal to nodecount 
    if (nodecount == 0){
      return height; 
    }
    height++;
    while (nodecount > 0){
      Node *node = q.front();
      q.pop();
      //push left and right at once
      if (node->left != NULL) {
                q.push(node->left);
      }
      if (node->right != NULL) {
                q.push(node->right);
      }
      nodeCount--; //decrement by 1 
    }
  }
  
}
