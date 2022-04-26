// TOWER OF HANOI

#include <iostream>
using namespace std;

void tower_hanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    tower_hanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    tower_hanoi(n-1,helper,dest,src);
}

int main(){

    tower_hanoi(3,'A','C','B');
    return 0;
}