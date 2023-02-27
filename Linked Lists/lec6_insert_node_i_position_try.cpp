#include <iostream>
using namespace std; 
#include "lec2_node.cpp"

// creating a linked list from scratch : 

Node* insertNode_better() {

	// define the inputs, the variables : 
	
	int data; 
	cin >> data; 
	
	Node *head = NULL;
	Node *tail = NULL; 
	
	
	// combine while loop with if-else construct : 
	while(data!=-1){
		
		
		// create a new node : 
		Node *newNode = new Node(data); 
		
		// now the automation is happening we have to check if the head is NULL
		// is the linked list empty? 
			
		if(head==NULL) {
		
		// then create a new node and both head and tail must point to the newly created first node : 
		head = newNode; 
		tail = newNode; 
		
		}
		
		// there is already one element atleast  : 
		else{
		
		// keep head static and move the tail now : so the tail pointer : will have the address of the next node.
		tail -> next = newNode; 
		
		// move tail pointer forward - now pointing at the second node. 
		tail = tail -> next; 
		
		}
	
	
		//keep taking in data : 
		cin >> data; 
	
	}
	

return head; 


}

// insert a node in between 2 nodes in a linked list : 
// so defining the function : 

// takes the head of the linked list : 
// takes the ith position of the linked list : 
// takes as input the data : 

// Node* insertNode_Between(Node *head,int i,int data){ 
// 	
// 	// take care of exceptions : so you have to think about those as well : 
// 	// when you insert in the middle, when you insert in the end or when you insert in the beginning. 	
// 	
// 	// how do you insert a node between 2 nodes? 
// 	// first you have to traverse till the ith position where the node is to be inserted : 
// 	
// 	// i is non zero by default : 
// 	
// 	Node *newNode = new Node(data); 
// 	Node *temp = head; 
// 	int count = 0;
// 	
// 	// I want to store something into the beginning : 
// 	
// 	if(head == NULL){
// 		// put the address of the head in the address section of the new Node : 
// 		newNode->next = head; 
// 		
// 		// replace head with the address of the newNode : so you a newly updated head pointer with the address of the newly created node 
// 		// which we want. 
// 		head = newNode; 
// 	}
// 		
// 	while(temp!=NULL && count < i-1) {	
// 		// basic traversal : 
// 		temp = temp -> next; 
// 		count++; }
// 	
// 	if(temp!=NULL) {
// 	// create an empty container to - store the address : 
// 	Node *a = temp -> next;  
// 	temp -> next = newNode; 
// 	newNode -> next = a; 
// 	}
// 	
// 	// updated head of the linked list : given that if we are to insert a node in the beginning : 
// 	return head; 
// }

// How do I delete the inserted node? 
// How do I basically now delete nodes given a linked list? 

Node* deleteNode(Node *head, int pos) {


/*
		node* temp=head;
		while(temp->next->data!=val) {
			
			temp=temp->next;
			
			}

		node* todelete= temp->next;
		temp->next=temp->next->next;
		
*/
	
	// returns head of the linked list : 
}


// print the linked list : 

void print(Node *head) {
	// while head is not null keep traversing the list : 
	while(head!=NULL){		
		cout << head -> data <<endl;
		head = head -> next; 
	}
}

    


int main() {


// Node insertion : 
Node *head = insertNode_better(); 

// print the nodes : 
//print(head); 

int i, data; 
//cin >> i >> data;

cin >> i; 

//head = insertNode_Between(head,i,data); 
head = deleteNode(head,i);

print(head); 

}