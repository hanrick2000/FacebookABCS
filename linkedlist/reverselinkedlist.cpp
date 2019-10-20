#include <iostream>
using namespace std;


// 1 2 3
// prev current next
// current->prev = current->next
// temp = current->next
// 2 1
// current->prev = temp 

// Iterative C++ program to reverse 
// a linked list 
/*
struct Node { 
  int data; 
  struct Node* next; 
  Node(int data) 
  { 
    this->data = data; 
    next = NULL; 
  } 
}; 

struct LinkedList { 
  Node* head; 
  LinkedList() 
  { 
    head = NULL; 
  } 

  void reverse() 
  {
    Node *current = head;
    Node *prev = NULL, *next = NULL;

    while (current != NULL){
      while (current != NULL) {

	next = current->next;
	current->next = prev;

	prev = current;
	current = next;

      }  
    } 

    head = prev; //ends up being the alst one 
  }

  void print() 
  { 
    struct Node* temp = head; 
    while (temp != NULL) { 
      cout << temp->data << " "; 
      temp = temp->next; 
    } 
  } 

  void push(int data) 
  { 
    Node* temp = new Node(data); 
    temp->next = head; 
    head = temp; 
  } 
}; 


int main() { 
  
  LinkedList ll; 
  ll.push(20); 
  ll.push(4); 
  ll.push(15); 
  ll.push(85); 

  cout << "Given linked list\n"; 
  ll.print(); 

  ll.reverse(); 

  cout << "\nReversed Linked list \n"; 
  ll.print(); 
  return 0; 
} 
*/


// revursive approach
struct Node { 
  int data; 
  struct Node* next; 
  Node(int data) 
  { 
    this->data = data; 
    next = NULL; 
  } 
}; 
  
struct LinkedList { 
    Node* head; 
    LinkedList() 
    { 
        head = NULL; 
    } 
  
    Node* reverse(Node* head) 
    { 
    if (head == NULL || head->next == NULL){
      return head; 

    }

    Node *rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL; 
  

    return rest; 
  }


  void print() 
  { 
    struct Node* temp = head; 
    while (temp != NULL) { 
      cout << temp->data << " "; 
      temp = temp->next; 
    } 
  } 
  
  void push(int data) 
  { 
    Node* temp = new Node(data); 
    temp->next = head; 
    head = temp; 
  } 
}; 
  
/* Driver program to test above function*/
int main() 
{ 
  /* Start with the empty list */
  LinkedList ll; 
  ll.push(20); 
  ll.push(4); 
  ll.push(15); 
  ll.push(85); 
  
  cout << "Given linked list\n"; 
  ll.print(); 
  
  ll.head = ll.reverse(ll.head); 
  
  cout << "\nReversed Linked list \n"; 
  ll.print(); 
  return 0;

}
