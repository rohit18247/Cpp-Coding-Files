#include<iostream> 
using namespace std; 

/* What does the function search_x do? It takes x - the number whose occurrences are to be determined, an array
the size of the array and returns the first occurence of x.  */

// When we think about this problem - we think about it in terms of recursion rather than iteratively. 
// Time complexity of this will be Big Oh of n - since we have to traverse the array in its entirety. 

// we divide the problem into three parts and the decomposition is as follows : 

// First we want to identify the base cases : 
// Second we want to solve for n-1 by the power of PMI 
// Third using 1,2 we can solve for n. 

int search_x(int arr[], int size, int x) {

// takes an array, size and x. 
// define base cases : 

// what does the function return? 
// the function returns - a positive integer. Because we have to return the array index. 
if (size==0) {
// problem is undefined. 
return -1 ; 
}

if (size == 1 & arr[0]==x) {
return 0 ; 
}

else {
return -1 ; 
}

// Do I want to have so many base cases? What base cases are relevant to solving the problem at 
// hand and how to identify. 
// Identify redundant base cases and do not use them.  

// recursively call on (n-1)th elements : 
int search_x_SmallerArray = search_x(arr+1, size-1, x); 
return search_x_SmallerArray ; 

// Is the problem solved? Are we able to do it for n elements in the array? If not - continue : 





}





int main() { 
int n;
int x;  
n=5; 
x=5; 
int arr[5] = {2,1,2,5,5}; 
cout<<search_x(arr,n,x)<<endl;
 
}
