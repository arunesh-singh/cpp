// C++ program to find the maximum
// element of each column.
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

// Function to find the maximum
// element of each column.
void largestInColumn(int mat[][MAX], int rows, int cols)
{
	for (int i = 0; i < cols; i++) {
		// initialize the maximum element
		// with 0
		int maxm = mat[0][i];

		// Run the inner loop for rows
		for (int j = 1; j < rows; j++) {
			// check if any element is greater
			// than the maximum element
			// of the column and replace it
			if (mat[j][i] > maxm)
				maxm = mat[j][i];
		}

		// print the largest element of the column
		cout << maxm << endl;
	}
}

// Driver code
int main()
{
	int n = 4, m = 4;
	int mat[][MAX] = { { 3, 4, 1, 8 },
					{ 1, 4, 9, 11 },
					{ 76, 34, 21, 1 },
					{ 2, 1, 4, 5 } };

	largestInColumn(mat, n, m);

	return 0;
}
