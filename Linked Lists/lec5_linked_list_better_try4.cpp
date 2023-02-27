/* In the context of creating linked lists in C++, Node* is a pointer to a node object in the linked list. The type of this pointer is "Node*", which means it points to an object of type "Node".

The function Node* takeBetter_Input() 
that accepts a head argument and returns the head of
a newly constructed linked list means that it takes the head 
of an existing linked list as an argument and returns the head 
of a newly constructed linked list. The type of the returned 
value is Node*, which means it's a pointer to the head node 
of the newly constructed linked list.

The head argument is a pointer to the head node of an existing 
linked list, and the function returns a pointer to the head node 
of the newly constructed linked list. The returned 
pointer can be used to access and traverse the linked list.

*/


#include <iostream>
using namespace std; 

#include "lec2_node.cpp"


// have a look at the line 8 in particular : 
Node* takeInput_better() {
	
	//initialize : 
	int data; 
	cin >> data; 
	
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data!=-1){
	
		//Don't forget node creation :  
		Node *newNode = new Node(data); 
		
		if(head==NULL){
		
		head = newNode;
		tail = newNode; 
		
	}
		
	 	else{

			tail -> next = newNode;
			
			tail = tail -> next; 	 	

	 	
	 	}
	
	
	// keep taking in data :
	cin >> data; 
	
	}	



 return head; 

}



// print the list function : 
void print(Node *head) {

	while(head!=NULL){
	
		cout << head -> data << endl; 
		
		head = head -> next; 
	
	}

}

int main(){

	// initialize 
	Node *head = takeInput_better(); 
	
	//print linked list :
	print(head);


}

// Mastered the art of creation of linked list in O(n). 



