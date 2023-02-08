#include<iostream>

using namespace std;

int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    if(input[currIndex] == x){
        return currIndex;
    }

    return firstIndex(input,size,x,currIndex+1);
    
}

int main(){
    int input[] = {1,2,3,4,4};
    int x = 4;
    int size = 5;

    cout<<firstIndex(input,size,x,0);

    return 0;
}
