// pointers 5 : understanding null pointers 
// initialize pointers to zero. Do not use dangling pointers. They are dangerous! 

#include <iostream>
using namespace std; 

int main() {

	// create a variable having some random value? 
	int i ; 
	cout << i << endl; 
	
	i++; 
	cout << i << endl; 
	
	// make sure the value 
	int* p = 0; 
	cout << p << endl; 
	
	// print the value stored in *p : 
	cout << *p << endl; //This is wrong
	
	// increment the value pointed by *p : 
	(*p)++ ; // This is wrong 
	
	// print the incremented value  :
	cout << *p << endl;  // This is wrong

	// Dont leave the memory 

}