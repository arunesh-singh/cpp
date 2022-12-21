#include <iostream>
using namespace std;

class Queue{
    int rear,front;

    int size;
    int* arr;
public:
    Queue(int n){
        front = rear = -1;
        size = n;
        arr = new int[size];
    }

    bool isFull(){
        if(rear == size-1 && front == 0 )
            return true;
        if( front == rear+1 )
            return true;
        return false;
    }


    bool isEmpty(){
        if( front == -1 )
            return true;
        return false;
    }
    
    void enQueue(int ele){
        if( isFull() ){
            cout<<"Queue is full";
            return;
        }
        if( front == -1) front = 0;
        rear = (rear+1)%size;
        arr[rear] = ele;
        cout<<"\nInserted "<<ele<<endl;
    }

    int deQueue(){
        if( isEmpty() ){
            cout<<"Queue is Empty";
            return -1;
        }
        int ele = arr[front];
        if( front == rear ){
            front = -1;
            rear = -1;
        }
        else
            front = (front+1) % size;
        
        return ele;

    }

    void display(){
        if( isEmpty() ){
            cout<<"\nEmpty Queue"<<endl;
            return;
        }
        cout<<"\n\nFront ->"<<front;
        cout<<"\nItems : ";
        int i;
        for( i=front; i != rear ; i=(i+1)%size)
            cout<<arr[i]<<" ";
        cout<<arr[i];
        cout<<"\nRear ->"<<rear<<endl;
    }
};

int main(){

    Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6);

    q.display();

    int ele = q.deQueue();
    cout<<"\nDeleted Element is "<<ele;

    q.display();

    q.enQueue(7);

    q.display();

    q.enQueue(8);

    return 0;
}