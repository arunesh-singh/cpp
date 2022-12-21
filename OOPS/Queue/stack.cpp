#include <iostream>
using namespace std;

# define n 10

class Stack{
    int top = -1;
    int arr[n];

    public:

    void clear(){ 
        delete[] arr;
    }
    bool isEmpty(){
        return (top == -1);
    }
    bool isFull(){
        return (top == n-1);
    }

    void top(){
        return arr[top];
    }
    void push(int data){
        if( top == n-1){
            cout<<"Stack Overflow\n";
            return;
        }
        arr[top++] = data;
    }
    int pop(){
        if( top == -1){
            cout<<"Stack Underflow\n";
            return;
        }
        return arr[top--];
    }
};

class Queue{

    Stack s1, s2;
    public:

    bool isFull(){
        return s1.isFull();
    }
    bool isEmpty(){
        return s1.isEmpty();
    }
    void enQueue(int data){
        if( isFull()){
            cout<<"Queue is Full\n";
            return;
        }
        s.push(data);
    }
    int deQueue(){
        while(!isEmpty())
            s2.push(s1.pop());
        
        s2.pop();
        while(!isEmpty()
            s1.push(s2.pop());
    }
};

int main{

    Queue q;
    q.enQueue(1);

    return 0;
    
}