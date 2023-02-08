// Lecture 3 : Pointers and Arrays : 
// Using pointers to traverse arrays linearly : 

#include <iostream>
using namespace std; 


int main() {

	// initialise an array : 
	int a[10]; 
	
	// print the address of the array : a : 
	cout << a << endl; 
	
	// print the address of the "first" element of the array : a : 
	cout << &a[0] << endl; 
	
	// you will find that both the addresses are the same. 
	// a is effectively the base address of the zeroth element of the array. 
	
	a[0] = 5; 
	
	// a is addresss 
	// de-reference a : as : *a 
	
	// *a gives us the value stored in the a[0] 
	cout << *a << endl; 
	
	
	// initialize a[1] :
	a[1] = 10;  
	
	// Let us do pointer arithmetic on this : 
	cout << *(a+1) << endl; 	

	// hence : *(a+i) == a[i] :: the power of de-referencing pointer address with respect
	// to array. 
	
	// understanding fundamental difference between an array and pointer : 
	
	int* p = &a[0]; 
	
	// what will be the out put here ? 
	cout << a << endl; 
	cout << p << endl; 
	
	
	// answer : 
	// what will be the output here : 
	cout << &p << endl; 
	cout << &a << endl; 
	
	// answer : 
	// understanding sizeof :
	
	// gives the size of the entire array 
	cout << sizeof(a) << endl; 
	
	// gives the size of the pointer :  
	cout << sizeof(p) << endl; 
	
	// understanding : 
	
	p = p+1; 
	// a = a+1; // a cannot be re-assigned. Array cannot be reassigned. 
	// error for above statement 
	
	// error in the console : pointers_and_arrays.cpp:63:4: error: array type 'int [10]' is not assignable
    //    a = a+1; 
    // a cannot be re-assigned. Array cannot be reassigned. 
	
	// do correction here :
	p = a+1; 
	
	
	
	
}