#include <iostream>
using namespace std;

class Node{
public:
    int Val;
    Node* Next;
};

void print(Node* head){
    Node * cur=head;
    while(cur!=NULL){
        cout<<cur->Val<<endl;
        cur=cur->Next;
    }
}

void insertAtFront(Node**head,int newVal){
    // 1. Prepare a new node
    Node* newNode=new Node();
    newNode->Val=newVal;

    // 2. Put it in front of current head
    newNode->Next=*head;

    // 3. Move head of the list to point to the newNode
    *head = newNode;
}

void insertAtEnd(Node**head,int newVal){
    // 1. Prepare a newNode
    Node* newNode=new Node();
    newNode->Val=newVal;
    newNode->Next=NULL;

    // 2. If linked list is empty , new node will be head node
    if(*head==NULL){
        *head=newNode;
        return;
    }
    // 3. Find the last node
    Node* last = *head;
    while(last->Next!=NULL){
        last=last->Next;
    }
    
    // 4. Insert newNode after last node
    last->Next=newNode;

}

void insertAfter(Node *prev , int newVal){
    // 1. Check if the previous node is NULL
    if(prev==NULL){
        cout<<"Previous cannot be NULL"<<endl;
        return;
    }
    // 2. Prepare a newNode
    Node* newNode=new Node();
    newNode->Val=newVal;

    // 3. Insert newNode after previous Node
    newNode->Next=prev->Next;
    prev->Next=newNode;
}

int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->Val=1;
    head->Next=second;

    second->Val=2;
    second->Next=third;

    third->Val=3;
    third->Next=NULL;

//    insertAtFront(&head,-1);
//    insertAtFront(&head,-2);
//    insertAtEnd(&third,4);
    insertAfter(head,-1);
    insertAfter(second,-5);
    print(head);
    
    return 0;
}