#include <iostream>
using namespace std;

int main()
{
    char arr[100]="My name is Arunesh Singh.";
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i];
        i++;
    }
    return 0;
}