// Section 1 : Pointers : Lecture 6 : Double Pointers : 
// Demonstration of double pointers : 

#include <iostream>
using namespace std; 

// what will be the answer to the following questions : 
void increment1(int** p) {
	p = p + 1; 
}

void increment2(int** p) {
	*p = *p + 1; 
}

void increment3(int** p) {
	**p = **p +1; 
}
 
// what will be the answers to these functions? 
// for increment1 : 

// no change/no updation wrt p will happen. All changes will happen in a temporary place at p and 
// then they will vanish. 

/*
   for increment 2 :: 
   the address of p will be increased by 1. 


	for increment 3 :: 
	the value of i will be increased by 1 : 
	It becomes 11. 
	
*/


int main() {
	int i = 10; 
	int * p = &i; 
	
	// create a double ponter : 
	// what is a double pointer ? : It is a pointer storing the address of another pointer. 
	// pointerception. 
	
	int ** p2 = &p; 
	
	// print the following : 
	cout << p2 << endl; 
	cout << &p << endl; 
	
	// what will we get here. Write your results below. 
	
	// we should get the same thing because both are referring to the address of the 
	// pointer p. 	
	// 0x16f7277f0 
	
	// print the following : p & p2 : 
	// p : gives the address of pointer p 
	cout << p << endl; 
	
	// gives the value stored in p : since p2 is pointing and being de-referenced.
	cout << *p2 << endl; 
		
	// both give :  0x16eedf7fc
	
	// what does this give : 
	cout << &i << endl; 
	// yes the same address. 
	
	// what will be the output of the following  :
	cout << i << endl; 
	cout << *p << endl; 
	cout << **p2 << endl; 
	
	// write the answer here : 
	// 10 in all the three cases  
	
	
}

