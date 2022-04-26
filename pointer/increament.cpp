#include <iostream>
using namespace std;

void increament(int *a)
{
    (*a)++;
}

int main(){
    int a=2;
    increament(&a);
    cout<<a<<endl;
    return 0;
}
