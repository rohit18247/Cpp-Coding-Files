#include <iostream>
using namespace std; 

// constant pointers are helpful in function calling : 

void g(int const & a) { 
a++; 
} 

// Gives Error : const_pointers.cpp:7:2: error: cannot assign to variable 'a' with const-qualifi// ed type 'const int &'


void f(const int * p) { 
	// now it won't be able to change the value of *p. 
	// read only variable is not assignable. 	
	
	(*p)++ ; 

}


int main() {
	int const i = 10; 
//	int *p = &i; 

	// Note : You cannot store the address of a constant integer in a normal pointer. 
	// You get the following error : 
	

//const_pointers.cpp:8:7: error: 
//cannot initialize a variable of type 'int *' with an rvalue of type 'const int *'
// int *p = &i;	


	// creating a const pointer OR : 
	// p is a pointer to a constant integer : 
	
	int const *p = &i;   
	// you can only do read only stuff through this. 
	// The path has become constant
	// You cannot do any write operation or change the value. 

	// scenario 2 : 

	int j = 12; 
	int const * p2 = &j; 

	cout << *p2 << endl; 
	j++;
	cout << *p2 << endl; 

	// what will be the output of the following codes above? 

	

}























