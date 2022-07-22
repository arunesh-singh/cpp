#include "bits\stdc++.h"
using namespace std;


int permutation(int n, int r){

    if (r == 0)
        return 1;

    if (r > n)
        return 0;

    return permutation(n - 1, r) + r * permutation(n - 1, r - 1);
}

int combination(int n, int r){

    if (r == 0 || r == n)
        return 1;

    return combination(n - 1, r) + combination(n - 1, r - 1);
}


int main(){

    int n, r;
    cout << "\nEnter the value of n: ";
    cin >> n;
    cout << "\nEnter the value of r: ";
    cin >> r;

    cout << "\nPERMUTATION "
         << "P(" << n << ", " << r << "): " << permutation(n, r);
    cout << "\nCOMBINATION "
         << "C(" << n << ", " << r << "): " << combination(n, r);

    return 0;
}