SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    
  SinglyLinkedListNode *new_head = NULL; // new head of mered list 
    SinglyLinkedListNode *sorting; // head of a new linkd list
    if (head1 == NULL){
        return head2;
    }
    if (head2 == NULL){
        return head1;
    }

    if (head1 && head2){
        if (head1->data < head2->data){
	  sorting = head1; // will point to the node that is less
	  head1 = sorting->next; // now head1 is incrememtted to next 
        }
        else{
            sorting = head2;
            head2 = sorting->next;
        }
    }

    new_head = sorting; // head of new sorted list 

    while (head1 && head2){
        if (head1->data < head2->data){
	  sorting->next = head1; // next 
	  sorting = head1; // now sorting ointer is incrmented 
	  head1 = sorting->next; // head increments 
        }
        else{
            sorting->next = head2;
            sorting = head2;
            head2 = sorting->next;
        }
    }
    if (head1 == NULL){
        sorting->next = head2;
    }
    if (head2 == NULL){
        sorting->next = head1;
    }
    return new_head;
}
