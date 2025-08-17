#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << (pos - 1)) ? 1 : 0);
}

int setBit(int n, int pos)
{
    return (n | 1 << (pos - 1));
}

int clearBit(int n, int pos)
{
    return (n & (~(1 << (pos - 1))));
}

int togglingKBit(int n, int pos)
{
    return (n ^ (1 << (pos - 1)));
}

int togglingRightmostBit(int n)
{
    return (n & n - 1);
}

int isolatingRightmost1Bit(int n)
{
    return (n & ~n);
}

int isolatingRightmost0Bit(int n)
{
    return (~n & n + 1);
}

int powerOf2(int n)
{
    return (n & n - 1);
}

int multiply2PowerK(int n, int K)
{
    return (n << K);
}

int dividing2PowerK(int n, int K)
{
    return (n >> K);
}

int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    // cout << getBit(75, 3) << endl;
    // cout << setBit(75, 3) << endl;
    cout << clearBit(75, 4) << endl;
    cout << togglingKBit(75, 4) << endl;
    cout << togglingRightmostBit(75) << endl;
    cout << isolatingRightmost1Bit(75) << endl;
    cout << isolatingRightmost0Bit(75) << endl;
    cout << powerOf2(75) << endl;
    cout << powerOf2(64) << endl;
    cout << multiply2PowerK(64, 1) << endl;
    cout << dividing2PowerK(64, 1) << endl;
    return 0;
}