// Section 2 : Dynamic Memory : Lecture 7 : Constant Variables. 

/*
Notes : 
Understanding the role of constant variables : 


*/



#include <iostream>
using namespace std; 

int main () { 

	const int i = 10; 
	int j = 12; 
	

// creating a constant reference from a non const int  :

	const int & k = j; 
	j++; 

	cout << k << endl;
	

// what will be the output of the following code above? 
// constant reference from a const int 

int const j2 = 12; 
int const &k2 = j2; 


// what will be the output of the below codes? 
j2++ ; 
k2++ ;  
// Sir's Answer : Gives error for the two lines of code above.  

// reference from a const int 
int const j3 = 123; 
int & k3 = j3; 
k3++; 

// you cannot do the above : gives an error. 


} 


















