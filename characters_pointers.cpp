// Lecture 4 : Characters and Pointers : 

#include <iostream>
using namespace std; 

int main() {

	
	// what if we write this : 
	char str[] = "abcde"; //creates a 6 byte array
	// char* pstr = "abcde"; Don't do this. 
	
	
	// understanding characters (arrays) and pointers : 
	// Understand and execute what the following block of code will do : 
	
	// initialise an array of numbers :  
	int a[] = {1,2,3} ; 
	
	// initialize a character array : 
	char b[] = "abc" ; 
	
	// print : this should technically print the address : 
	cout << a << endl; 
	cout << b << endl; 
	
	// very interesting result : 
	// for, a we got : the address of the array 
	// for, b we got : contents of b. 
	
	// what could be the reason? 
	
	// cout is built differently for character pointers and character arrays. 
	// recall at the end of string : null character : \0 is also stored. 
	
	
	char* c = &b[0]; 
	cout << c << endl; 
	
	// what will this print? 
	// This will print the actual contents : 
	
	// abc
	
	// do the following  :
	
	char c1 = 'a'; 
	char* pc = &c1; 
	
	cout << c1 << endl; 
	cout << pc << endl; 
	
	// what will the result of the execution of the above two codes : 
	// a 
	// a??n 
	
	
	
	
	
	

}