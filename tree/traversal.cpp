/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void preOrder(Node *root) {
        
        if (root == NULL){
            return;
        }
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);

    }

//inorder left cout right
//postordr left right cout

void inorder(Node *root){

  if (root == NULL){
    return;
  }

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);

}


void postordr(Node *root){

  if (root == NULL){
    return;
  }

  postordr(root->left);
  postordr(root->right);
  cout << root->data << " ";


}
