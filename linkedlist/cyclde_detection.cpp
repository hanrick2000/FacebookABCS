bool has_cycle(SinglyLinkedListNode* h){
 
    unordered_set<SinglyLinkedListNode*> s; 
    while (head != NULL) { 

        if (s.find(h) != s.end()) {
            return true; 
        }
  
        s.insert(h); 
  
        h = h->next; 
    } 
  
    return false;
}


bool has_cycle(SinglyLinkedListNode* h){
    
    SinglyLinkedListNode* slow_pointer = h, *fast_pointer = h;
    
    while (slow_pointer && fast_pointer && fast_pointer->next){
        slow_pointer = slow_pointer->next;
        fast_pointer = fast_pointer->next->next;
        
        if (slow_pointer == fast_pointer){
            return true;
        }
    }
    return false;
}
