//1. Write a program to print sum and product of digits of an integer.

#include<iostream>
using namespace std;

int getProduct(int n)
{
    int product = 1;

    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }

    return product;
}

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout << "Product of digits of "<<n << " is "<< (getProduct(n)) << endl;
    cout<<"Sum of digits of "<<n<<" is " << (getSum(n)) << endl;
    return 0;
}
