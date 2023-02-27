// Time complexity of this program is O(n)
// Improved Linked List : 

#include <iostream>
using namespace std; 

#include "lec2_node.cpp"

// create a new linked list with improved time complexity using head and tail pointers : 
Node* takeInput_better() {

	int data; 
	cin >> data; 
	
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data!=-1){
	
		Node *newNode = new Node(data); 
		if(head==NULL) {
			head = newNode; 
			tail = newNode; 
		}
	
		else {
				tail -> next = newNode; 
				tail = tail -> next; 
				// OR we can write : tail = newNode; 	
		
		}		
		// since we are in the while loop - keep updating the 
		// data value of the new nodes that are being inserted. 
		
		// we had to cin the data for the initial first time : 
		// and then you automate inside a while loop : 
		cin >> data; 		
	}
	
	

return head; 
}


// print the linked list using the head :  

void print(Node *head){

while(head!=NULL){
	cout << head->data << endl; 
	head = head -> next;
}


}
int main() {


	Node *head = takeInput_better(); 
	print(head); 


}