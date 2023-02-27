// Inserting a node recursively in linked list  : 

#include <iostream>
using namespace std; 

#include "lec2_node.cpp"



// define the functions : 

// creating a linked list from scratch : 

// when you are defining a function - you need to ask yourself what does it need:  
// head, position where it will be inserted and data. 

// Insertion into linked list recursively. 
// code currently incomplete: 

// Break this problem into two parts : insertNode function and create Linked List : 
Node* insertNodeRec(Node *head){

	 int data; 
	 
	// Node *head = NULL; 
	
	if(head==NULL){
		Node *newNode = new Node(data); 
		return head; 
				
	}
	
	// returns the head of the new node : 
	head->next = insertNodeRec(head->next);
	return head; 
}

Node* createdLLRec(int data){
	
	//int data;
	cin >> data; 
	
	if(data==-1){
		return NULL; 
	}
	
	// this recursion continues till the user inputs -1 by definition : 
	Node *head = NULL;
	head  = insertNodeRec(head);
	
	return head; 
} 


Node* insertNode() {
	
	// in order of O(n) time : 
	// declare variables : 
	 int data; 
	 cin >> data; 
	 Node *head = NULL; 
	 Node *tail = NULL; 
	 
	 while(data!=-1){
	 	
	 	// start checking conditions : 
	 	// what should be our base condition : 
	 	// linked list is empty or not empty :
	 	// Ensure global accessibility for node creation : 
	 	Node *newNode = new Node(data); 
	 	
	 	if(head==NULL){
	 		head = newNode; 
	 		tail = newNode; 
	 	} 
	 	
	 	else {
	 	
	 		// update address of new Node using tail.
	 		tail->next = newNode; 
	 		
	 		// update the tail pointer : 
	 		tail = tail -> next; 
	 	
	 	}
	 
	 // keep getting data from the user: 
	 cin >> data; 
	 
	 }	
	
	// function returns head of the newly created linked list : 
	return head; 

}



// if you are trying to code something complex - first start with something small : 
// print a linked list  : 
 
// void printList(Node *head){
// 
// 	while(head!=NULL){
// 	cout << head -> data << endl; 
// 	head = head -> next; 
// 	
// 	}
// 
// }

// recursively print the linked list now :
// works. good.

	void printListRecursively(Node *head){
	
	// base condition : 
	if(head==NULL){
	return ; 
	}
	
	else {
	
	cout << head -> data << endl; 
	printListRecursively(head->next); 
	
	}
}
	
 // Find length of the linked list : 
// recursive/iterative approach : 

int lengthCal(Node *head){
	
	int size; 
	size = 0; 
	
	while(head!=NULL){
	
		head = head -> next; 
		size = size + 1; 
	
	}
	
	return size; 

}

	

// Deletion from linked list iteratively : 
// How do I delete a particular node having a value 'X' that I am looking for. 
// 

// Reverse a Linked List : 

Node* reverseList(Node *head){
	
	// algorithmic thinking decomposition : 
	// 1. Traverse till the end of the list.
	// 2. Reverse the connection. Now reverse all connections starting from end. 
	// 3. Return the address of the last node or of this newly linked list. 
	
	// Define 3 pointers : previous, current, next. 
	// iterate through a loop. 
	// return the head of the newly reverse linked list through previous. 
	
	// initialisations : 
	Node *prev = NULL;
	Node *curr = head;
	Node *nextptr;
	
	while(curr!=NULL){
	
	//update all pointers : 
	
	// move forward in the linked list : 
	nextptr = curr -> next; 	
	
	// change the link [reverse the link]: 
	curr -> next = prev; 
	
	// update the pointers : 
	// link reversal steps : 
	
	// the previous pointer should move ahead and gets updated by the value in the current pointer 
	prev = curr; 
	
	// the current pointer gets updated by the next pointer value : 
	curr = nextptr; 
		}
 return prev;   	
}

// How to do the above recursively? 

Node* reverseListRec(Node *head){
	
	//base case 
	Node *prev = NULL;
	if(head==NULL){
	
		// do nothing : 
		return 0; 
	
}
	
	// decompose for 1 and n-1
	// define for the n-1 step : 	
	else {
	
		// Initialise : 
		Node *prev = NULL;
		Node *curr = head; 
		Node *nextptr = curr -> next; 
		
		prev = curr;
		curr = nextptr; 
		
		head = reverseListRec(head->next); 
		prev = head; 
	}

	// because ultimately the new head becomes the current pointer - which is equal to prev.
	return prev; 	

}
	
int main(){
	// invoke the function :   
	//int data;
	int result; 
	Node *head2 = NULL;
	
	Node *head = insertNode();
	//Node *head = NULL;
	//head = insertRecursively(head);
	
	//cout << "Enter Linked List data: ";
    //Node* head = createdLLRec(data);
		
	//Node *head = insertRecursively(); 
		
	// Print the list :  
	//printList(head); 
	printListRecursively(head); 
	result = lengthCal(head); 
	
	cout << "Length of Linked list is : " << endl; 
	cout << result << endl; 
	
	//head = reverseList(head); 
	head = reverseListRec(head);
		 	
	cout << "The reversed linked list is :" << endl; 
	printListRecursively(head); 
}



