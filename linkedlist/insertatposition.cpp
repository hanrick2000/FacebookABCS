SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    
    
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = head;

    int i = 0;

    while(i < position - 1){
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node; 
    return head; 

}
