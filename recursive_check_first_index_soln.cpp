#include<iostream>
using namespace std; 

int firstIndex(int size, int x, int arr[], int currIndex) {

//base case : 

if(size==currIndex) {
return -1; }

//small calculation : 
if(arr[currIndex]==x) {
return currIndex; 
}
//recursive call : 

return firstIndex(size,x,arr,currIndex+1) ; 

}
int main() {

int size;
int x; 
int currIndex; 

size=5;
x=3;
//currIndex=0; 
int arr[5] = {1,2,3,4,4}; 
//should return 3 

cout<<firstIndex(size,x,arr,0)<<endl; 
return 0 ; 

}


