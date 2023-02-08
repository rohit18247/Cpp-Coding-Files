#include <iostream> 
using namespace std; 

inline int max(int a, int b) {

	return (a>b)? a : b ;
}

int main() { 
// We will be focussing on inline functions - making our code more compact - and how this 
// helps in code reusability : 
// ProTip : To remember : Documentation is important! 

 int a,b; 
 cin >> a >> b; 

 int c = max(a,b); 

 int x,y;
 x = 12;
 y = 32; 

 int z = max(x,y); 

 // How to ensure performamce does not take hit and there is code readability. 
 // use inline function. 

 // good for one line function. 



}






































