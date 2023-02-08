/*Pointers 3 : Understanding how to increment pointers : */ 

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
	
	// logic : 
	// initially 10 gets printed because that is the value stored in i. 
	// when we increment i, we are definitely making i = 11. 
	// and since *p only contains address of i, it is pointing to i, it will also show
	// 11. Unless *p value (address) gets changed. 
	
	// word of advice ; don't randomly changing pointer address values. 
	

}

