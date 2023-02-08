#include<iostream>
using namespace std; 

//function takes first argument as size of array, number whose index to be determine 
// and array itself 

int find_first_index_x(int n, int x, int arr[]) {

/* While doing problems in recursion we have certain steps as follows : 
1. Define the base cases 

2. Define the recursive function call to be made on smaller subproblem of size n-1 usually
could also be of size n-2,n-3, .....

3. Define the small calculation to be made. 

2 and 3 are interchangeable. */    

//base case 1 : if size of array is zero return -1 [is this base case or small calculation?]

if(n==0){
return -1 ; 
}

//base case 2 : if size of array is one, and the element is present in the first index only,
// we then no need to traverse the array - halt the program : and return 0, since the first index
// by default is zero 

if(n==1 && arr[0]==x) {
return 0 ; 
}

//recursive call for n-1 : by power of PMI : our function works on n-1. Pata nahi kaise - 
// bas karta hain. 

int smaller_SubProblem = find_first_index_x(n-1,x,arr+1)
//size of array shrinks by 1, pointer increments when we move to next element of array. 
// what to return from this function? index. Now 

/*There are two cases if - index is greater 0, return n-1+1 = n or if index was zero in the first place
then return 0 */

if(n-1>0) {
return n;
}

else {return 0;}
*/

}

int main() {
// I need size, x and array

int n; 
int x; 
n=5; 
x=4; 

int arr[5] = {1,2,3,4,4};


//invoke the function call : 
cout<<find_first_index_x(n,x,arr)<endl;     


}