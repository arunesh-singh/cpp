#include <iostream>
#include <stack>
using namespace std;

void inSort(stack<int> &s, int temp)
{
    if (s.top() <= temp || s.empty())
    {
        s.push(temp);
        return;
    }
    int x = s.top();
    s.pop();
    inSort(s, x);
    s.push(x);
}

void sortStack(stack<int> &s)
{

    if (s.empty())
        return;

    int temp = s.top();
    s.pop();
    sortStack(s);
    inSort(s, temp);
}

void printStack(stack<int> &s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main()
{

    stack<int> s;
    s.push(1);
    s.push(0);
    s.push(9);
    s.push(4);
    s.push(2);

    sortStack(s);

    printStack(s);
}