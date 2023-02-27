// Write a way to grow linked list in order of n. 

#include <iostream>
using namespace std; 

#include "lec2_node.cpp" 

Node* takeInput_better(){

	// define variable : 
	
	int data; 
	cin >> data; 
	
	// Initialize pointers : 
	
	Node *head = NULL; 
	Node *tail = NULL; 
	
	// start the looping : 
	
	// untill and unless you recieve a -1 from the user : we are now 
	// defining the taking in input from user thing : 
	while(data!=-1) {
	
		// what will we do? 
		// we will create a new node : 
		// that takes input as data : 
		Node *newNode = new Node(data); 
		
		if(head==NULL){
		// and then what does it do? 
		// update the pointers : 
		
		// WHen first node is created both head and tail will point to
		// the sane node : 
		head = newNode;
		tail = newNode; }
				
		
		else {
		
			// at the same time tail should also point to the new ndoe:
			tail -> next = newNode; 
	
			//update the tail address : 
			tail = tail->next; 
		
		}  
	
	// keep taking in data while the user does not input -1
	cin>> data; 
	
	}	

	// should at the end return head: 
	return head; 
}


void print(Node *head) {

	while(head!=NULL){
	
	// print the data member : 
	cout << head -> data << endl; 
	
	// update the pointer : 
	head = head -> next; 
	
	}


}


int main() {

	
	Node *head = takeInput_better();
	print(head); 




}


