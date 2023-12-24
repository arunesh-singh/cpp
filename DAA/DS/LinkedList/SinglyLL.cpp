#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
}

void
print(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->val << "->";
        cur = cur->next;
    }
    cout << "NULL" << endl;
}

void insertAtFront(Node **head, int value)
{
}

int main()
{

    return 0;
}