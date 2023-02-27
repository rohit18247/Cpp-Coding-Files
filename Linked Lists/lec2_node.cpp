// To first compile and execute such files write the following : g++ -c lec2_node.cpp  

#include <stdio.h>
class Node { 

// define the data members of the linked list class :  

	public : 
	int data;
	Node *next; 

	//  define/initialize the constructor : 

	Node (int data) { 

	// Base case initialization : 
	this -> data = data; 
	this -> next = 0; 

 }

}; 
