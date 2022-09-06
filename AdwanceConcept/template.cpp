#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b){
    return (a>b? a:b);
}


int main(){
    int x = 4 , y = 9;
    cout<<GetMax(x,y);
}