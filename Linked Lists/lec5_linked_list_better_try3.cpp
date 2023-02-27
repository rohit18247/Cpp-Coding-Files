#include <iostream>
using namespace std; 

#include "lec2_node.cpp"


// creating a linked list from scratch : 
// linked list generator function basically : 

Node* takeInput_better(){
	
	int data; 
	cin >> data; 
	
	Node *head = NULL;
	Node *tail = NULL; 
	
	// process continues untill user does not stop entering numbers
	// for the linked list : 
	while(data!=-1){
		// if-else construct  :: 
		
		// you can define new node creation here but then dont forget to
		// link tail with new node in the else construct if you do that.
		
		if(head==NULL){
		
		//create a new node with user defined data :
		// apparently the placement of this affects everything.
		// so i have placed this inside of the if loop 
		// while the coding ninjas instructor placed outside. so because of this I dont need to do this now : 
		
		// tail -> next = newNode; : becomes redundant. And now the program works fine absolutely. 
		Node *newNode = new Node(data);
		
		// point head and tail to that data element. 
		
		head = newNode; 
		tail = newNode; 
		
		}
		
		else {
		
		// if head is not null
		// linked list exists - 
		// we then use the tail concept : move the tail, keep head static
		
		
		// what is the meaning of this? 
		//tail -> next = newNode; 
		
		// link the next part of the tail to the new node that is being created
		// in front of it. 
		
	
		// keep tail moving forward 
		tail = tail -> next; 
		
		}	
			
			// keep taking in data till -1 entered : 
			cin >> data; 
	
	}		
	
	// -1 entered - exit the whole loop : and then 
	// at the end what should this function return? 
	// head : 
	return head; 

}


void print(Node *head){

	while(head!=NULL){
		
		// print the data element and update the pointer : 
		cout << head -> data << endl; 
		head = head -> next; 
	
	}


}


int main() {


// print the linked list : 
Node *head = takeInput_better(); 
print(head); 

}