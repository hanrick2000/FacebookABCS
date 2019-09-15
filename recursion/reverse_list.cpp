// iterations

struct list{
    int value;
  list *next;
};

// 1 2 3 l = 1
// head = 1, rest = 2,
// new_rest = 3
// rest->next = 1
// head = 2
// rest = 3
list* reverse(list* l){

  // one or none
  if (! || !l->next){
    return 1;
  }

  // head will be the beginnign of the reversed list
  list* head = 1; // contains reverse list

  list* rest = l->next;
  head->next = NULL;

  while (rest){
    list* new_rest = rest->next;
    rest->next = head;

    // now head is recently added element and rest is the node that used to follow it

    head = rest;
    rest = new_rest;
  }

  return head;

}


// recursive
int reverse(list *l){

  // one or none
  if (! || !l->next){
    return 1;
  }

  // recursive step: reversing a list as reversing the ret and then appendin gthe first element to the end of the reversed list
  else{
    list* rest_list = l->next;
    list* reversed_rest = reverse(l-Mext);
    rest_lst->next = l;

    l->next = nullptr;
    return reversed_rest;

  }
}
