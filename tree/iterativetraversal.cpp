void inorderiterative(Node *root){

  if (root == NULL){ return; }
  stack<Node*> stack;
  stack.push(root);

  
  while (!stack.empty()){
    if (curr != NULL){
      stack.push(curr);
      curr = curr->left;

    }
    else{
      // if null
      curr = stack.top();
      stack.top();
      cout << curr->data << " ";
      curr = curr->right; // set it to right side 
    }


  }
}


// root left right 
void preorderiterative(Node *root){

  if (root == NULL){ return; }
  stack<Node*> stack;
  Node *curr = root;

  
  while (!stack.empty() || curr != NULL){
    if (curr != NULL){
      stack.push(curr);
      curr = curr->left;

    }
    else{
      // if null
      curr = stack.top();
      stack.top();
      cout << curr->data << " ";
      curr = curr->right; // set it to right side 
    }


  }
}
