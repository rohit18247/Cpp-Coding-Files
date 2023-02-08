#include<iostream>
using namespace std; 

a* Recursively check if an array is sorted or not - if the array is sorted return a boolean value - true/1 and if not sorted - returns false/0 */ 

// It is given that the array is sorted in ascending order : 1,2,3,4. :: array
// is sorted. 


int check_sorted(int n, int a[]) {

/*Let n define the size of the array while a defines the array itself*/

/*Define the base case*/ 

//If array is of length zero or 1 - then it is already sorted.  
if(n==0 || n==1) {
return true; 
} 

//Base case not done yet : what about if we have n=2 - just two elements : 
if (a[0]>a[1]) {
// is the array sorted in this case?  
 return false; 
}

/*Assume the problem is solved for n-1 by the power of PMI */
bool is_smallerSorted = check_sorted(n-1, a+1);  
return is_smallerSorted; 

}

int main() { 
int n; 
n=5; 
int arr[5] = {5,1,2,3,4}; 
cout<<check_sorted(n,arr)<<endl;
 
}

/* expected output : True or 1. */

