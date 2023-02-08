// Section 2 : Dynamic Memory ; Lecture 4 : Dynamic Memory 2D Arrays : 

#include <iostream>
using namespace std; 

int main(){
	
	int m, n; 
	cin >> m >> n; 
	// create an array of integer pointers : 
	int** p = new int*[10];
	 
	// using for loop iterate through the array of integer pointers : 
	for(int i=0; i < m ; i++) { 
	p[i] = new int[n];
		for(int j = 0 ; j < n ; j++) { 
			cin>> p[i][j]; 
		} 	

	}	  
	

	
	// free the memory that has now been created in the heap : 
	// use the delete keyword. 
	
	// first delete the arrays that are row wise being pointed by the array of integer pointers. 		// important to do deletion of memory so that memory leak does not happen. 

	
	for(int i = 0; i < m ; i++) {
	delete [] p[i]; 

}
	// delete the array of integer pointers now: if deletion done before then how would we get t	// arrays that are stored? 

	delete [] p ; 

}



















