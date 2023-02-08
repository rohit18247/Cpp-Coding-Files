// 1. Pointers : Lecture 5 : Pointers and Functions : 
// Understanding how pointers and functions work together : 

#include <iostream>
using namespace std; 

void print(int* p) {
	// de-reference the pointer and print it out : 
	cout<< *p << endl; 
}

// Let us create another function called increment pointer and see how that works : 

void incrementPointer(int* p) {
	p = p+1; 
}

// make another function : 

void incrementPointer2(int* p) {

//de-reference and increment 
(*p)++; 

}


int main () {

	int i = 10; 
	int* p = &i; 
	
	print(p); 
	
	// what will be the result here? My ans : 10
	// correct answer : address of memory  : 0x16da1f7fc
	cout << p << endl; 
	
	incrementPointer(p);  
	// what will be result in case of execution of above code : My ans : 11 
	// correct answer : address of memory : 0x16da1f7fc
	cout << p << endl; 

	// Solve the following : 
	cout << *p << endl; //10 
	
	incrementPointer2(p); 
	
	cout << *p << endl;
	
	
	
	
	
}