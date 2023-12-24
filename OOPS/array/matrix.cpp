#include <iostream>
using namespace std;

class Matrix
{
    int ROWS;
    int COLS;
    int *arr;

public:
    Matrix(int rows, int cols)
    {
        ROWS = rows;
        COLS = cols;
        arr = new int[ROWS * COLS];
    }
    ~Matrix()
    {
        delete[] arr;
    }
    void input()
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                // arr[i * COLS + j] = i * COLS + j;
                cin >> arr[i * COLS + j];
            }
        }
    }
    void print()
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                cout << arr[i * COLS + j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator=(const Matrix m2)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                arr[i * COLS + j] = m2.arr[i * COLS + j];
            }
        }
    }
    Matrix operator+(const Matrix m2)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                cout << arr[i * COLS + j] + m2.arr[i * COLS + j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator-(const Matrix m2)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                cout << arr[i * COLS + j] - m2.arr[i * COLS + j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator*(const Matrix m2)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                for (int k = 0; k < ROWS; k++)
                    cout << arr[i * COLS + k] - m2.arr[k * COLS + j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    Matrix m1(3, 3);
    m1.input();

    Matrix m2(3, 3);
    m2.input();

    Matrix m3(3, 3);
    m3 = m2;
    // m3.print();

    m1.print();
    m2.print();
    m1 + m2;
    m1 - m2;
    m1 *m2;
}