// Pointers : 4 : 
// Introduction to pointers : 

#include <iostream> 
using namespace std; 

int main () {

	//create a variable 
	int i = 10; 
	
	//store the address of that variable in a pointer. 
	int* p = &i; 
	
	//print the size of the pointer : 
	cout << sizeof(p) << endl; 
	
	//print the variable : that is the value of i : 
	cout << i << endl; 
	
	//print what is the pointer pointing to? in this it should be same as above : 
	cout << *p << endl; 
	
	// increment i
	i++ ; 
	
	// what will be the case when we have incremented i and we re-run the following
	// print statements : ? 
	// Provide the lpgic in the end : 
	
	cout << i << endl; 
	cout << *p << endl; 
	
	// Let us update the value of i : 
	i = 12; 
	cout << i << endl; 
	cout << *p << endl; 
	
	*p = 23; 
	
	cout << i << endl; 
	cout << *p << endl;
	
	// what happens when we do the following : 
	// what does : (*p)++ do? 
	 
	(*p)++; 
	cout << i << endl; 
	cout << *p << endl; 
	
	// it "increments" : "the value"  "stored at the address" pointed by *p : 
	// now both i and *p will reflect the same value - it is as if i++ done. 

}