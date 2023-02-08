#include <iostream>
using namespace std; 

// define a global variables accesible to all functions and as well as to the stuff inside the int main() function 


int a; 


void g() { 

	a++; 
	cout << a << endl; 
}

void f() {

	cout << a << endl ; 
	a++ ; 
	g() ;

}

int main() {

	a = 10; 
	f() ;	 
	

	cout << a << endl; 

	// what will be the output when we run the program? 

	// My Answer : 
	//10
	//12
	//12 

	// Sir's Answer: 

}
