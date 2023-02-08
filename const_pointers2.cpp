#include <iostream> 
using namespace std; 



int main () { 

 int i = 10;
 int j = 21; 

 int const * p = &i; 

 p = &j; 


 // what will the above codes do? 
  
cout << *p << endl; 
cout << p << endl; 

(*p)++; 
cout << *p << endl; 

// NOTE : (*p)++ is read only - not assignable.  

// To make your pointer constant : 

int * const p2 = &i; 
(*p2)++; 

p2 = &j; 

// You can declare a pointer like this as well : 

int const * const p3 = &i; 

// we cannot do the following then : these lines are invalid : 
p3 = &j; 
(*p3)++; 

} 














