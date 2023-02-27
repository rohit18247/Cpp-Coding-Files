// Create Dynamically Linked List as well ::

#include <iostream>
using namespace std; 
#include "lec2_node.cpp"

void print(Node *head) {

// ALways remember to store the head address into a temporary variable and then 
// operate on that temporary variable - not to make permanent changes to the permanent 
// variable : 

// Since the head is an address of type what? of type node - so we have to define in the way
// below : 

Node *temp = head; 

// Traversing the linked list : 
while(temp!=NULL) {
	
	// print the value in the node : 
	cout << temp -> data << " " << endl; 
	
	// update the pointer address in the head variable : move to the next node. 
	temp = temp -> next;
	
	// What should be the condition for the while loop - so that we keep traversing? 
	
	// Ideally we should NOT stop till we have reached the end : when head is NULL. 
	
	// To stop the traversal at the second last element of the linked list itself is : 
	
	// head -> next ! = NULL.
     }
}

int main() {

	// Create 5 nodes statically - and link them : 
	
	// instantiate data : 
	
	Node n1(1);
	
	Node *head = &n1; 
	
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5); 
	
	
	// Link the nodes : 
	n1.next = &n2; 
	n2.next = &n3; 
	n3.next = &n4; 
	n4.next = &n5; 

// print the data : 
/*	
cout << n1.data <<endl; 
cout << n2.data <<endl; 
cout << n3.data <<endl;
cout << n4.data <<endl; 
cout << n5.data <<endl; 
*/ 

// How to print the linked list? 

// Create a function print function that 
// Takes as input the head and then traverses the entire linked list and prints each
// value contained in the node :
 
// Can we use head? 
// what happens if we call the print function two times when we have set head = NULL? 

print(head);

// print(head); 



}
