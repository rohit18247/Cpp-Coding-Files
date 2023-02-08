// Section 2 : Lecture : 3 Dynamic Memory Allocation : 


#include <iostream>
using namespace std; 


// working with heap memory in the space : 

int main() {

	int * p = new int; 
	*p = 10; 

	// what will be the value of the following? 
	cout << p << endl;  
	
	// Answer : address of p 

	// what will be the output of the following? 

	cout << *p << endl; 
	 
       	// we can also allocate memory of type double in the stack : 
	double *pd = new double; 

	// something for character similarly : 
	char *c = new char; 

	// initialize an array in heap using new keyword : 
	
	int *pa = new int[50];

	// we can also do this now: that is dynamic allocation at the run-time :  
	int n; 
	cin>>n; 
	
	int *pa2 = new int[n]; 

    	// store the first element in the first index or [zeroth index of the array] : 
	//pa2[0] = 10; 

	for(int i = 0; i < n; i++ ) {
		cin>>pa2[i];

}

	int max = -1; 
	for(int i = 0; i < n; i++) {

	if(max < a[i]) {
	max = a[i]; 
		}
	}
	
	cout << max << endl ; 

}

































