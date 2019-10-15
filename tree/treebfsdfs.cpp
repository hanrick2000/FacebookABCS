//BFS AND LEVEL ORDER

/*
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

    

    void levelOrder(Node * root) {
        
        queue<Node*> levelorder; 
        
        if (root == NULL){
            return;
        }
        
        if (root){
            levelorder.push_back(root);
        }
        
        while(!levelorder.empty()){
            Node* front = levelorder.front();
            levelorder.pop();
            
            cout << front->data << " ";
            
            if (front->left){
                levelorder.push_back(front->left);
            }
            
            if (front->right){
                levelorder.push_back(front->right);
            }
        }
        

    }
