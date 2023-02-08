# include <iostream> 
using namespace std; 

// initial function declaration : 
// int sum (int a[], int size, int si) 

// si given default value of 0. 

// default value given to the right most placeholder first. To give another one, then it becomes the// second last. 


int sum (int a[], int size, int si = 0) { 

// si stands for start index.  

int ans = 0; 

for(int i = 0; i < size ; i++) {

ans += a[i] ; 
}

return ans; 

}

// 2nd function : 

int sum2 (int a, int b, int c = 0, int d = 0)  { 

	return a + b + c + d; 

}

int main() {

int a[20]; 

	// input code for a : 

	cout << sum(a,20) << endl; 


}











