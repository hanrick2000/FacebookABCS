SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    // head 
    SinglyLinkedListNode *new_head = NULL;
    SinglyLinkedListNode *sorting;
    if (head1 == NULL){
        return head2;
    }
    if (head2 == NULL){
        return head1;
    }

    if (head1 && head2){
        if (head1->data < head2->data){
            sorting = head1;
            head1 = sorting->next;
        }
        else{
            sorting = head2;
            head2 = sorting->next;
        }
    }
    new_head = sorting;
    
    while (head1 && head2){
        if (head1->data < head2->data){
            sorting->next = head1;
            sorting = head1;
            head1 = sorting->next;
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
