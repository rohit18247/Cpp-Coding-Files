// Section 2 : Lecture 1 : Address Typecasting : 

#include <iostream>
using namespace std; 

int main(){
	
	int i = 65; 
	
	// Performing Typecasting : 
	char c = i; 

	// print the contents stored in c now : 
	cout << c << endl; 
	
	// Prints B. 
	// Converts the integer bytes into character bytes since the type of data we have specified is 
	// char. So it will return something into Char only. 
	// This is called Typecasting. 	 
	 
	 int * p = &i; 
	 
	 // Explicit Typecasting :- the earlier warning will be suppressed now 
	 char * pc = (char*)p; 
	
	 // what will be the output of: 
	 
	  	cout << *p << endl; 
	 	cout << *pc << endl; 
	 	cout << *(pc + 1) << endl; 
	 	cout << *(pc + 2) << endl; 
	 	cout << *(pc + 3) << endl; 
	 	
	 	
	 	//cout << *(pc+4) << endl;
	 	
	 // output of *p == 66
	 // output of *pc == B 
	 

	 // output of *(pc+1) == Null Character == Nothing will be printed == Not even an empty line	
	 // output of *(pc+2) == Null Character == Nothing will be printed == Not even an empty line 
	 // output of *(pc+2) == Null Character == Nothing will be printed == Not even an empty line
	 
	 // what will be the output of ? 
	 
	 cout << p << endl; 
	 cout << pc << endl; 
	 
	 
	 
	 	

} 