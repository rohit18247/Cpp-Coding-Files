// To execute this file use the command : g++ lec2_linked_list.cpp
// Run : ./a.out 

// Do not use  :g++ -c lec2_linked_list.cpp




#include <iostream>
using namespace std; 

#include "lec2_node.cpp"

int main() {

/* Defining a linked list : creating a linked list of size two :  
*/ 

// We can define node creation statically. 

// Begin instantiating the data members : 
Node n1(1);
Node *head = &n1; 

Node n2(2); 
n1.next = &n2;  

Node n3(3); 
n2.next = &n3; 

Node n4(4); 
n3.next = &n4; 

// n4.next = n5; 

cout << n1.data << " " << n2.data << " "<<n3.data<< " "<<n4.data << endl; 

//Create nodes Dynamically : 
// Wbat does it mean to create a node dynamically? 

// Create the values and the addresses: 

Node *n5 = new Node(10); 
Node *n6 = new Node(20); 

// Link Them : 

n5 -> next = n6; 

cout << n1.data <<endl;  
cout << n2.data <<endl;  
cout << n3.data <<endl;  
cout << n4.data <<endl;  
cout << n5 -> data <<endl;  
cout << n6 -> data <<endl;  


} 
