// Section 2 : Dynamic Memory ;  Lecture 3 : Dynamic Memory Allocation : 

// Part 2 continued : 

#include <iostream>
using namespace std; 

int main() {

	int *p = new int;

	// Automatic memory release in case of Heap not possible : Use this to illustrate
	// that fact  :
	
	// to free the memory allocated in heap use keyword : 
	delete p; 

	// p is now gone. 
	// if you access memory p - you will end up accessing memory that is not yours, 
	// you will end up accessing some random memory - so don't do that. 

	p = new int; 
	delete p; 

	// Important to note : Pointer is not being deleted - the memory being pointed by the pointer  	      // is being deleted.  
	
	// deleting an array.  
	p = new int[100]; 
	delete [] p; 

		

/*	// incase of heap memory allocation
	while (true){
		
		int *p = new int; 

}

	// in case of static memory allocation
	while (true) {
	int i = 10; 

}

	// use acitivity monitor to see the difference. 

*/ 	

} 
















