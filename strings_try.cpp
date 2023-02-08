#include<iostream>
using namespace std; 


// given an array of string, find its length recursively. 
// some of these comments are here to help you understand and solve the problem : 

// define base case 
// solve for n-1 
// do some small calculation to extend for size n problem. 

int length(char s[],currIndex){

// define base case 
// note that every string array - not an integer - array - by default starts with : 
// \0.  

if (s[currIndex]=='\0') {
 return -1; 
}

if (s[currIndex]!='\0') {
index = index+1; 
return index;
}


// solve for n-1 
// increment pointer of the character array to the next element  
int len = length(s[currIndex+1]);
return len ; 
  

// do small calculation : 
// stop when we reach the end of the array? 


}

//take input array from the user :  

int main() {
char str[100]; 
cin>>str; 

// calculate the lenght : 
int l = length(str);
// print out the length : 
cout<<l<<endl; 
} 
