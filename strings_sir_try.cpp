#include<iostream>
using namespace std; 

int length(char s[]){

//define the base case of the function : 
 if(s[0] == '\0') {
 return 0;
}

int smallLengthSubString = length(s+1);
return 1+smallLengthSubString; 

}

int main() {

char str[100] ; 


cin>>str; 
cout<<length(str)<<endl; 

}
