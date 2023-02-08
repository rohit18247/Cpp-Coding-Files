/*Finding the nth fibonacci number instead of the sum of fibonacci series*/
/*returns the nth element in the fibonacci series*/

#include<iostream>
using namespace std; 

int fibonacci(int n) {

 if(n==0)
	return 0;
 if(n==1) 
	return 1; 

 int smallFib  = fibonacci(n-1) + fibonacci(n-2); 
 return smallFib;
 
}

int main() {
int n;
cout<<"Enter nth index of which the fibonacci element is to be determined"<<endl; 

cin>>n; 

cout<<fibonacci(n)<<endl; 
}








