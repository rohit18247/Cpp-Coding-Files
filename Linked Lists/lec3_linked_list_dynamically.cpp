#include <iostream>
using namespace std; 

#include "lec2_node.cpp"

// print function for the linked list : 

void print(Node *head) {

Node *temp = head; 

 while(temp!=NULL){
 
 	cout<< temp->data <<endl; 
 	temp = temp ->next; 
 }

}

int main() {

// Create a Linked List Dynamically : 

// also define the head : 
//Node *head;

Node *head = new Node(10); 
Node *n2 = new Node(20); 
Node *n3 = new Node(30); 
Node *n4 = new Node(40); 
Node *n5 = new Node(50); 

head -> next = n2; 
n2 -> next = n3;
n3 -> next = n4; 
n5 -> next = NULL; 

// What does it mean to create something dynamically? 
// n1 is the address. 

// *n1 : I will get value.  
// n1 -> data : prints the value. 
// cout << n1 -> next << endl; 

// Link the nodes dynamically - because we have not done that : 

print(head);

}