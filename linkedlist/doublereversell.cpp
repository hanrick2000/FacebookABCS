*
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
/*
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    
    if (head == NULL){
        return head; 
        
    }
    
    DoublyLinkedListNode* current = head; 
    DoublyLinkedListNode* temp = NULL;
    while (current != NULL){
        temp = current->next;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; // originally the next
    }
  //  head = temp->prev;
    if(temp != NULL ){
        head = temp->prev;
    }
    return *head; 

}*/

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head){
    
     DoublyLinkedListNode *temp = NULL;  
     DoublyLinkedListNode *current = head;


     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;              
       current = current->prev;
     } 
    // change null 
    if(temp != NULL ){
        head = temp->prev;
    }

    return head;
