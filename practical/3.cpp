/*
3. Write a program to compute the sum up to the n terms of the following series:
S= 1+ 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ………..
*/
#include <iostream>
using namespace std;

double sum(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (1.0/i);
    return sum;
}

int main()
{
    int n;
    cout<<"Enter a number -: ";
    cin>>n;
    cout <<"Sum up to "<<n<<" terms is "<< sum(n)<<endl;
    return 0;
}
