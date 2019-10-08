// bfs
// lvelv by level

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
        
        deque<Node*> levelorder; 
        
        if (root == NULL){
            return;
        }
        
        if (root){
            levelorder.push_back(root);
        }
        
        while(!levelorder.empty()){
            Node* front = levelorder.front();
            levelorder.pop_front();
            
            cout << front->data << " ";
            
            if (front->left){
                levelorder.push_back(front->left);
            }
            
            if (front->right){
                levelorder.push_back(front->right);
            }
        }
        

    }
