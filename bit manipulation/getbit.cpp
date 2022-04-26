/*  n=1010
    1<<i=0100
    1010 & 0100 = 0100
*/
#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int getbit(int n,int pos){
    return (n & (1<<pos) ! = 0);
}

int main(){
    cout<<getbit(5,2)<<endl;
    return 0;
}
