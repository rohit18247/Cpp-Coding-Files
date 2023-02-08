#include <iostream> 
using namespace std; 
#define PI 3.14

int main () {
	
	int r; 
	cin >> r; 
	
	// double pi = 3.14 avoid this. 
	
	// area of square compute : 
	cout << PI * r * r << endl; 

	// before compile time, the value of PI will be substituted. 
	// Compiler will only see 3.14 everywhere - and then it will execute its stuff. 

	// no extra memory
	// no -one can affect internally 
	// best performance - chef's kiss. 
	// good. 


  
	 

}
