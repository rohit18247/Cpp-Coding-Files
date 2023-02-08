// Section 2 : Lecture 2 : Reference and Pass By Reference : 

#include <iostream>
using namespace std; 

void increment(int& n) {

	n++ ; 
}

// Don't Do the following : 

/*
int& f1(int n) {
	int a = n; 
	return a; 

}

int * f2(int n){

int i = 10; 
return &i ; 

}

*/ 

int main() {

	// initialize value of i to 10. 
	int i;
	
	i = 10;  
	//int j = i; 
	
	
	// New memory for j created, however if we updated i, the value of j won't be updated. 
	// Now try the following : 
	
	// call the increment function : 10:59 onwards in lecture : 
	increment(i); 
	cout << i << endl; 
	
	int &j = i;  
	
	// increment i. 
	i++; 
	
	// prints the value of j. 
	cout << j << endl; 
	
	// when we run with the updated statement : int &j = i; 
	// we get j = 11. 
	
	j++; 
	
	// what will this print? 
	cout << i << endl; 
	// My answer without running [guessing] is 11. [I forgot that j had become 11]
	// Actual Ans: 12
	
	// Now do : 
	int k = 100; 
	j = k;
	
	// what will be the value of this? 
	cout << i << endl; 
	
	// we cannot declare the variable like this : 
	// int &j ; this will give error during compile time. 
	

}