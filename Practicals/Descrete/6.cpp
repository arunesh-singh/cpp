#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char help){

    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,help,dest);
    cout<<"Moved from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,help,dest,src);
}

int main(){

    towerOfHanoi(3,'A','B','C');
}