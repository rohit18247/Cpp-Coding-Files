// Insertion into a linked list recursively : 
#include <iostream>
using namespace std; 

#include "lec2_node.cpp"



// First how does one go about traversing a linked list recursively?
// Then how to print a linked list recursively? 


Node* insertNodes(Node *head){
	
	



	return head; 

}




void traverseRecursively(Node *head){

	// always check first : 
	if(head == NULL){
	// nothing to return : just exit : 
	
	return ; // OR return 0; 
	
	}

	 else {
	 	// we are traversing not printing any data : 
	 	traverseRecursively(head->next); 
	 }
}
 
// print the list recursively : 

void printRecursively(Node* head) {

	if(head == NULL) {	
	// Nothing to print : 
	return ; 
	}
	

	cout << head -> data << endl; 
	printRecursively(head->next);


}

 
 
// Let us focus on that question rather than focussing on how to 


int main() {

	
	// check if the function is working: 
	



}



