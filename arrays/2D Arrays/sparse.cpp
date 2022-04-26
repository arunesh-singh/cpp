#include <iostream>
using namespace std;

#define M 3
#define N 4

void transpose(int A[][N], int B[][M])
{
	int i, j;
	for(i = 0; i < N; i++)
		for(j = 0; j < M; j++)
			B[i][j] = A[j][i];
}

int main()
{
	int A[M][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 } };

	int B[N][M], i, j;

	transpose(A, B);

	cout << "Result matrix is \n";
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			cout << " " << B[i][j];
			
		cout << "\n";
	}
	return 0;
}

int main()
{
    cout<<"Enter the dimensions of the matrix: ";
    int m, n;
    cin>>m>>n;
    double mat[m][n];
    int zeros = 0 ;
    cout<<"Enter the elements of the matrix: ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j] == 0)
            {
                zeros++;
            }
        }
    }

    if(zeros > (m*n)/2)
    {
        cout<<"The matrix is a sparse matrix";
    }
    else
    {
        cout<<"The matrix is not a sparse matrix";
    }
    return 0;
}
