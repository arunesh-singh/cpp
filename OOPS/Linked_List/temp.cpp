#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int val){
        data = val ;
        next = NULL;
    }
};

class Stack{

    Node* head,*cur,*prev;

    public : 
    Stack(){
        head = NULL;
    }

    void display(){
        Node * temp = head;
        if(head == NULL){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        while(temp->next!= NULL){
            cout<<temp->data<<" -> ";
        }cout<<"NULL\n";
    }

    void push(int val){
        
        Node* temp = new Node(val);
        if( head == NULL){
            cur = head = temp;
            return;
        }
        
        prev = cur;
        cur->next = temp;
        cur = temp;

    }
    void pop(){
        if(head == NULL){
            cout<<"Stack Underflow\n";
            return;
        }
        prev->next = NULL;
        Node * temp = cur;
        cur = prev;
        delete temp;
    }

};

int main(){

    Stack s = new Stack();
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();

    s.pop();
    s.pop();

    s.display();

}