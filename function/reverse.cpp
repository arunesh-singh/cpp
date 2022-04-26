#include <iostream>
using namespace std;

int sum(int n)
{
	int sum = 0,j=1;
	for (int i = 1 ; i <= n; i++)
		sum += j;
        j++;
        sum -= j;
        j++;
	return sum;
}

int main()
{
	int n = 6;
	cout << sum(n);
	return 0;
}
