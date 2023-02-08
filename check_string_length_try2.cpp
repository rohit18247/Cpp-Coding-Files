#include<iostream>
using namespace std; 


int length(char str[]) {

if(str[0]=='\0') {

return 0; 

}

if(str[0]!='\0') {

int smallSubStringLength = length(str+1);
return 1+smallSubStringLength; 

}


}


int main() {

char str[100]; 
cin>>str; 

cout<<length(str)<<endl; 

}





