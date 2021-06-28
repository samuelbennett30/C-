/*
  SINGLY LINKED LISTS
----------------------
A singly linked list is a type of data structure that is made up of nodes that are created using self referential structures.
Self Referential Structure is a structure which contains a pointer to a structure of same type. Each of the nodes contains 2
parts, namely the data and the reference to the next list node.
The last node in the list points to nothing, so it stores NULL in that part.
*/
#include <iostream>
using namespace std;
struct Node(){
  int data;
  struct Node * next;
}
struct Node * head = NULL;

void insert(int new_data){
  struct Node * new_node = (struct Node *) malloc ( sizeof ( struct Node ));
  new_node -> data = new_data;
  new_node -> next = NULL;
  head = new_node;
}

/*
The function insert() actually inserts data at the begining of the linked list. It creates a new node and inserts the number
into the data field of the new node. Then the new node points to the head. Finally head is the new node, i.e from where the
linked list starts.
*/

void display(){
  struct Node * ptr;
  ptr = head;
  while(ptr != NULL){
    cout<<ptr ->data<<" ";
    ptr = ptr->next;
  }
}

int main(){
  
  insert(3);
  insert(4);
  inster(5);
  insert(6);
  insert(7);
  cout<<"The Linked List is: ";
  display();
  return 0;
}
