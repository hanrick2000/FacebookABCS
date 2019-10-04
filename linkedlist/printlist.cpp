* SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };

void printLinkedList(SinglyLinkedListNode* head) {
    
    if (head == NULL){
        return;
    }
    SinglyLinkedListNode* node = head;
    while (node != NULL){
        cout << node->data << "\n";
        node = node->next;
    }
    

}
