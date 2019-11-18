#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

//left root right
// inorder non recurive
void inorder(Node *root){

  stack<Node*> s;
  Node *current = root;

  while (current != NULL || !(s.empty())){
    while (current != NULL){
      s.push(current);
      current = current->left;
    }
    // probably null at this point 
    current = s.top();
    s.pop();

    cout << current->data << " ";
    /* we have visited the node and its 
       left subtree.  Now, it's right 
       subtree's turn */
    current = current->right; 
  }

}



//preorder root left right
void preorder(Node *root){

  if (root == NULL){
    return;
  }
  stack<Node*> s;
  s.push(root);

  /* Pop all items one by one. Do following for every popped item 
       a) print it 
       b) push its right child 
       c) push its left child 
  */

  while (!(s.empty())){
    Node *node = s.top();
    cout << node->data;
    node.pop();

    if (node->right){
      s.push(node->right);
    }
    if (node->left){
      s.push(node->left);
    }
  }

}



// post order left right root
//preorder root left right
void postorderIterative(Node* root){
	// create an empty stack and push root node
	stack<Node*> stk;
	stk.push(root);

	// create another stack to store post-order traversal
	stack<int> out;

	// run till stack is not empty
	while (!stk.empty()){
		// we pop a node from the stack and push the data to output stack
		Node *curr = stk.top();
		stk.pop();

		out.push(curr->data);

		// push left and right child of popped node to the stack
		if (curr->left)
			stk.push(curr->left);

		if (curr->right)
			stk.push(curr->right);
	}

	// print post-order traversal
	while (!out.empty())
	{
		cout << out.top() << " ";
		out.pop();
	}
}
