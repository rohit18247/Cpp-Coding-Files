// Linked list Iterative reversal and then from there figure out how to do it recursively : 

#include <iostream>
using namespace std; 

class Node {
	public: 
	
	int data; 
	Node *next; 
	
	Node(int data){
	
	this -> data = data; 
	this -> next = 0; 
	}
};

Node* reverseList(Node *head){
	
	
	// Define the pointers : 
	Node *prev = NULL;
	Node *curr = head; 
	Node *nextptr; 
	
	while(curr!=NULL){

	// we have to start moving the pointers : 
	nextptr = curr -> next; 
	curr->next = prev;  
	prev->next = curr; 
	
	
	// how do I move nextptr forward? 
	// reverse the links then : 
	// we have reached the end of the list : 
	curr -> next = prev -> next; 
	// exit loop once done. 
	
	}
		
	

	// because at the end current pointer becomes equal to previous pointer. 
	return prev; 

}	


void printList(Node *head){

	while(head!=NULL){
	cout << head -> data << endl; 
	head = head -> next; 
	}

}


int main(){
	// invoke reversal function here : 
	// create a List as well : how are you going to reverse an empty list. 
	
	head = reverseList(head); 
	printList(head); 
	
}
