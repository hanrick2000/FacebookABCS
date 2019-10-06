// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getCount(SinglyLinkedListNode* head){
  
    SinglyLinkedListNode* current = head;
    int count = 0;

    while (current != NULL){
        count++;
        current = current->next;
    }

    return count;
}

int getNode(int d, SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    int i;
    SinglyLinkedListNode* current1 = head1;
    SinglyLinkedListNode* current2 = head2;

      for(i = 0; i < d; i++){
        if(current1 == NULL){  
            return -1; 
        }
        current1 = current1->next;
      }

      while(current1 !=  NULL && current2 != NULL){
        if(current1 == current2){
            return current1->data;
        }
        current1= current1->next;
        current2= current2->next;
       }

  return -1;
}

int findMergeNode(SinglyLinkedListNode *headA, SinglyLinkedListNode *headB){

    int length1 = getCount(headA);
    int length2 = getCount(headB);
    int d;

    if(length1 > length2){
        d = length1 - length2;
        return getNode(d, headA, headB);
    }
    else{
        d = length2 - length1;
        return getNode(d, headB, headA);
    }
}

