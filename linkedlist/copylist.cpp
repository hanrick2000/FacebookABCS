Node *copyList(Node* list){

  Node* iterator = LIST;
  Node *copy = null;
  NODE *copyiterator = null;
  while (iterator != NULL){
    Node *temp = new node(ptr->value);
    if (copy = NULL){
      copy = temp;
    }
    else{
      copyiterator->next = temp;
    }
    copyiterator = temp;
    listteriator = listerator->next;
  }

  return copy;
}
