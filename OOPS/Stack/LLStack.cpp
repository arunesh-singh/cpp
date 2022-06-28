#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node * next;
    
    Node(){
        val = 0 ;
        next = NULL;
    }

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LL{
    public:
    Node * head;

    LL(){
        head = NULL;
    }

    void Push(int);

    void Display();

    void Pop();
};

void LL::Push(int data){
    Node *temp = new Node(data);
    if(head == NULL){
        head = temp;
        return;
    }
    Node *cur = head;
    while(cur->next!=NULL){
        cur = cur->next;
    }
    cur->next = temp;
}

void LL::Pop(){
    if(head == NULL){
        cout<<"Stack Underflow\n";
        return;
    }
    Node * cur = head;
    Node *temp = cur->next;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    cur->next = NULL;
    free(temp);

}

void LL::Display()
{
    Node* temp = head;
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }

    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }cout<<"NULL\n";
}

int main(){
    LL l;
    l.Push(11);
    l.Push(22);
    l.Push(33);
    l.Push(44);
    l.Push(55);

    l.Display();

    l.Pop();

    l.Display();
}