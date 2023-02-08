// Pointers : Lecture 2 :
// Understanding Pointers Arithmetic :: 

#include <iostream>
using namespace std; 

int main () { 

 int i = 10; 
 int* p = &i ; 
 
 // print what is stored in p : 
 cout << p << endl; 
 
 // increment pointer by 1 : 
 p = p+1; 
 
 // what will be the resulting value? 
 cout << p << endl; 
 
 // It will access the value stored in the next four bytes. 
 // p is the address value. Remember. 
 
 // what will happen if increment p by 2? 
 // that is if we do p = p+2, what does it mean? 
 
 p = p+2; 
 cout <<p<< endl; 
 
 // It is accessing the element that is stored after 8 bytes. That is 4+4 bytes are 
 // traversed in total in the process. 
 
 // we can also do :
 
 // p++ : access the next integer
 // p-- : access the previous integer 
 
 // p=p-2 : goes back 8 bytes. 
 
 p = p-2 ; 
 cout<<p<<endl; 
 
 // how does this help us?? 
 
 // helps us traversing an array in a linear fashion. 
 // not applicable for data structures that do not work like array or taking discrete variables.
 
 // for character pointer : 
 
 // c = c+1 : moves forward by 1 byte. Since character is 1 byte. 
 
 double d = 102.3; 
 double * dp = &d; 
 
 cout << dp << endl; 
 
 // increment the double pointer : or perform : dp = dp + 1; 
 dp++;
 
 // print it out : 
 cout << dp << endl; 
 
 // increase by 8 bytes instead of 4 bytes.
 
 // also study how hexadecimal numbers add up. 
 
}

