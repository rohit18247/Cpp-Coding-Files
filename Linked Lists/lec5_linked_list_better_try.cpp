// Create a function to both print the linked list 
// and create a linked size of arbitrary length of size n. In Linear Time : 

#include <iostream>
using namespace std; 

#include "lec2_node.cpp"

// create a function to create a linked list : 
// So initially I got confused in the making of the function itself : 

Node* takeInput_better() {
// how should this function start now? 
// well we need data member first right? 
// create data field : 
	int data; 
	cin >> data; 
	
	// what now?
	// we need to fix the addresses. 
	
	// create and initialise two addresses containers with NULL that will be used actually. 
	Node *head = NULL;
	Node *tail = NULL; 
	
	// now we need to start traversing : 
	// until the user gives - a -1 input - dont stop the creation of 
	// new nodes : 
	
	while(data!=-1) {
	
	//create a new node first : how do you define it? 
	
	//newNode is simply an object - an instantiation - an address : Node 
	// takes data as argument : 
	
	Node *newNode = new Node(data); 
	if(head!=NULL){
	// we have to now update the pointers/the links : 
	// define the head and tail : 
	
	// point both head and tail to the new node:
	// we defined it as *newNode so newNode by default is a variable
	// containing of type addresses. 
	head = newNode; 
	tail = newNode; 
	}
	// if head is not NULL then we do : 
	// head keeps pointing to the first element - but now the tail 
	// gets updated : 
	// so how do you update the tail? 
	
	
	
		else {
		
		// also 
		tail -> next = newNode; 
		// move and update tail 
		tail = tail -> next; //OR
		//tail = newNode;
		
		}
		cin >> data;
	
	}
	
	
// what should this function return in the end? 
// it should return something of type node right? 
// what exactly? 

return head; 

// what is the type of head? - it is an address.
// of whom? of type Node. therefore : Node* will be the function signature. 

}



// create a function to print the linked list : 
void print(Node *head) {

	while(head!=NULL){
	
	//print the data member of the node : 
	cout << head -> data << endl; 
	
	// update head : that is now head should point to the next node : 
	// so counter value in head is changing : for this we could use : 
	// a temporary variable: 
	// Node has two aspects : data and next. 
	head = head -> next ; 
	
	}
}


int main() {

// invoke the function to create a new linked list : 
Node *head = takeInput_better(); 
print(head);


}




