// remove all x's from a string

// given : abcxdxexx - convert to : abcde 

#include<iostream>
using namespace std; 

void remove_x(char s[]){

// brute force approach :: 
// recursively traverse through the array - find the x and delete it. 
// do this for all the x's that are encountered. 
// if size of the array is zero - do nothing - or return -1.
// if there are no x's in the string - return the string as itself. 

// define the base case : 

if (s[0] == '\0') {
return ; // return the string itself  
}

if(s[0]!= 'x') {

remove_x(s+1); 
} 

else {
 int i = 1 ; 
 
for(;s[i]!='\0';i++) {

s[i-1] = s[i]; 

}

// null character should also be copied : 
s[i-1] = s[i];

// do we need to increment/decrement the pointer?  

remove_x(s); 
}
}


int main() {
// take input from the user : 

char s[100]; 
cin>>s; 

// call the function to remove x's from the string :
remove_x(s);  
cout<<s<<endl; 



}

 
