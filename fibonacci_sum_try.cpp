#include<iostream>
using namespace std; 

/*I am interested in finding the fibonacci sum of series rather than finding the fibonacci number of the ith index*/ 

int factSum(int n) {

if(n==0)
	return 0; 
if(n==1) 
	return 1; 
  
int arrFib[] = factSum(n-1) + factSum(n-2); 
return arrFib;  

}

int main(){
cout<<factSum(5)<<endl; 
/*expected answer is 11*/
}
