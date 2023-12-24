#include <iostream>
using namespace std;

class diagonalM
{

    int *arr;
    int n;

public:
    diagonalM(int size)
    {
        n = size;
        arr = new int[n];
    }
    ~diagonalM()
    {
        delete[] arr;
    }
    void store()
    {
        cout << "Enter diagonal elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int retieve(int i, int j)
    {
        if (i < 0 || j < 0 || i >= n || j >= n)
        {
            cout < "Out of Bounds\n";
            return -1;
        }
        if (i == j)
        {
            return arr[i];
        }
        return 0;
    }
    void display()
    {
        cout << "The Diagonal Matrix is : \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    cout << arr[i] << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the size of Diagonal Matrix : ";
    cin >> n;

    diagonalM m1(n);
    m1.store();
    // m1.retieve(2, 2);
    m1.display();

    return 0;
}