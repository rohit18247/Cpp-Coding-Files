#include<iostream>
using namespace std; 

/*Define the function factorial*/
int factorial(int n){

cout << n << endl; 
if (n==0){
	return 1; 
}

int smallOutput = factorial(n-1); 
	return n*smallOutput; 
} 

int main() {

/*Did not define memory while writing the program - need to think about this*/

int n; 

cin>>n;

int output = factorial(n); 

cout<< output <<endl;


}
