#include <iostream> 
using namespace std; 

/* Define a new function for computation of factorial */ 

int factorial(int n){
 cout << n << endl;
 if (n==0) 
	return 1; 

 int smallOutput = factorial(n-1); 
 	 return n*smallOutput;	
}

/* Main body function for the execution of factorial */ 
int main(){

	int n; 
	cin >> n; 
	int output = factorial(n); 
	cout<<output<< endl; 


}
