/*solve factorial problem based on principle of mathematical induction*/

#include<iostream>
using namespace std; 

int factorial(int n){

/*Step one solve solve for base case*/ 

	if(n==0) {
		return 1; 
		}

/* assume for n-1 we get the result we want */ 
int smallOutput = factorial(n-1); 
int output = n*smallOutput; 
return output; 
} 

int main() {
int n;
cout<<"Enter a number"<<endl;
cin>>n ; 
cout<<factorial(n)<<endl; 

}
