#include <iostream>
using namespace std;

class deque {
    int n;
    int *arr;

    int front,rear;

public:
    deque(int N){
        front = -1;
        rear = 0;
        n = N;
        arr = new int[n];
    }

    bool isFull(){
        return ( (front == 0 && rear == n-1) || front == rear+1 );
    }
    bool isEmpty(){
        return (front == -1 );
    }

    void insertFront(int ele){

        if(isFull()){
            cout<<"Deque is full\n";
            return;
        }
        if( front == -1 )
            front = rear = 0;
        else if( front == 0)
            front = n-1;
        else
            front--;
        arr[front] = ele;
    }
    void insertRear(int ele){

        if(isFull()){
            cout<<"Deque is full\n";
            return;
        }
        if( front == -1 )
            front = rear = 0;
        else if( rear == n-1 )
            rear = 0;
        else
            rear++;
        arr[rear] = ele;
    }

    void deleteFront(){
        if( isEmpty() ){
            cout<<"Deque is empty."<<endl;
            return;
        }
        if( front == rear )
            front = rear = -1;
        else if( front == n-1 )
            front = 0;
        else
            front++;
    }
    void deleteRear(){
        if( isEmpty() ){
            cout<<"Deque is empty.\n";
            return;
        }
        if( front == rear )
            front = rear = -1;
        else if( rear == 0 )
            rear = n-1;
        else
            rear--;
    }
    int getRear(){
        if( isEmpty() || rear<0 ){
            cout<<"Deque is empty\n";
            return -1;
        }
        return arr[rear];
    }
    int getFront(){
        if( isEmpty()){
            cout<<"Deque is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main(){

    deque dq(4);

    cout << "insert element at rear end \n";
    dq.insertRear(5);
    dq.insertRear(11);

    cout << "rear element: "<< dq.getRear() << endl;

    dq.deleteRear();
    cout << "after deletion of the rear element, the new rear element: " << dq.getRear() << endl;

    cout << "insert element at front end \n";

    dq.insertFront(8);

    cout << "front element: " << dq.getFront() << endl;

    dq.deleteFront();

    cout << "after deletion of front element new front element: " << dq.getFront() << endl;

}