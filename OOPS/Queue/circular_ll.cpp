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
        front=NULL;
        back = NULL;
    }

    void enQueue(int data){

        node* n=new node(data);

        if(front == NULL)
            front=n;
        else
            back->next=n;
        back=n;
        back->next=front;
    }

    void deQueue(){
        if(front==NULL){
            cout<<"Queue Underflow\n";
            return;
        }
        node* todelete;
        if(front==back){
            todelete = front;
            front = NULL;
            back = NULL;
        }
        else{
            todelete = front;
            front=front->next;
            back->next=front;
        }
        delete todelete;

        return;
    }

    void peek(){
        if(front==NULL){
            cout<<"Queue Underflow\n";
            return;
        }
        cout<<front->data<<endl;

    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);

    q.peek();
    q.deQueue();

    q.peek();
    q.deQueue();

    q.peek();
    q.deQueue();

    q.peek();
    q.deQueue();

    cout<<q.empty();

    return 0;
}


