#include <iostream>
using namespace std;

bool isPowerOf2(int n){
    return (n && !(n & n-1));
}

int numOfOnes(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    
    cout<<numOfOnes(19)<<endl;
}