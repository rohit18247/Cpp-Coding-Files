//Create a function that creates a linked list and returns head. 

#include <iostream>
using namespace std; 
#include "lec2_node.cpp" 

// Define the takeInput function: 

// Do dry run of this every time to understand how this works before executing it on the computer. 
// Define the function : 

Node* takeInput() {

	int data; 
	cin >> data; 
	Node *head = NULL; 
	
	// create a condition where we keep expanding the linked list till
	// the user enters -1. 
	while(data!=-1) {
		
		// define dynamically: 
		
		Node *newNode = new Node(data); 
		
		if(head == NULL) {
		// if the head is NULL - then we have nothing : so create
		// a new node 
		head = newNode;
				
		}
 	else { 
 	// create a temporary variable because we have to store 
 	// the head value there. value in temp will keep getting updated. 
 	
 	Node *temp = head; 
 	while(temp -> next!=NULL){ 
 	
 	temp = temp -> next; 
 	 
 		}
	temp  -> next = newNode; 
	}		
cin >> data;
 	}

return head; 

}

void print(Node *head) {

while(head!=NULL) {

cout << head -> data << " "; 
head = head -> next; 

}

}


int main() {

	Node *head = takeInput(); 
	print(head); 



}
