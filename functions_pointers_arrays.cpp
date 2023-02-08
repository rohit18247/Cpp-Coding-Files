// Lecture 5 : Pointers and Functions continued : 
//  Functions and Arrays : 


#include <iostream>
using namespace std; 

// create a function that takes as input an array and the size of the array : 
// interesting note : int a[] : this gives the address of the array a. 

// we can do the following  : 
// note : a[5] = *(a+5) 

// so we can also write a[] as * a or equivalently : 
// int a[] == int * a


//int sum(int a[], int size) {
//	cout << sizeof(a) << endl; 
//	return 0; 
//}

// another function defintion : 

int sum(int a[], int size) { 
	
	int ans = 0; // code running but answer output is zero.  
	
	for(int i = 0 ; i < size ; i++) {
	//int ans = 0 ; : causing error here  
	ans += a[i] ; 
	}
	return ans; 
}

 

int main() {
	int a[10]; 
	cout << sizeof(a) << endl;  
	cout << sum(a,10) << endl;  
 
}

