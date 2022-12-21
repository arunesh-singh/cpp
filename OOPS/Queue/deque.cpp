#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;

    public:

    queue(){
        front = NULL;
        back = NULL;

    }
    void display(){
        if(front == NULL){
            cout<<"Deque is empty\n";
            return;
        }
        node* cur = front;
        do{
            cout<<cur->data<<" ";
            cur = cur->next;
        }while( cur != back);
        cout<<"NULL\n";
    }

    void insertFront(int data){

        node* n = new node(data);

        if( front==NULL){
            back=n;
            front=n;
            return;
        }
        n->next = front;
        front = n;
    }

    void insertBack(int data){

        node* n = new node(data);

        if( front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next = n;
        back = n;
    }

    void deleteFront(){
        if(front == NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        node* todelete = front;
        front= front->next;
        delete todelete;
    }

    void deleteBack(){
        if(front == NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        node* todelete = back;
        front= front->next;
        delete todelete;
    }

    int getFront(){
        if(front == NULL){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    int getBack(){
        if(front == NULL){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    int isEmpty(){
        if(front == NULL)
            return true;
        return false;
    }
/* 
    int size(){

    }

    void erase(){
        
    } */
};

int main(){

    queue q;
    q.insertFront(4);
    q.insertFront(3);
    q.insertFront(2);
    q.insertFront(1);
    q.insertBack(0);
    q.insertBack(-1);

    q.display();

    q.deleteBack();
    q.deleteFront();

    q.display();

    cout<<q.isEmpty()<<endl;

    return 0;
}