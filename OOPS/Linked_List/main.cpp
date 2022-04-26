#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void inserAtTail(Node* &head,int val){
    Node* n= new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

void print(Node * head){
    Node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

insertAtMid(Node* &prev,int val){
    if(prev==NULL){
        cout<<"Previous cannot be NULL \n";
    }
    Node* n=new Node(val);
    n->next=prev;
    prev=n;
}

bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}

void deleteHead(Node* &head){
    Node* temp=head;
    head=head->next;

    delete temp;
}

void deletion(Node* &head,int val){
    
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleteHead(head);
        return;
    }
    Node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

Node* reverse(Node* &head){
    Node* cur=head;
    Node* prev=NULL;
    Node* nextp;
    while(cur!=NULL){
        nextp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextp;
    }
    return prev;
}

int main(){
    Node * head=NULL;

    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    //print(head);

    insertAtHead(head,0);
    insertAtHead(head,-1);

    print(head);
    
    Node* newHead=reverse(head);
    print(newHead);
    //deleteHead(head);
    //deletion(head,0);
    

    //cout<<search(head,2)<<endl;
/*
    Node * second;
    Node * third;

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;

    
*/
    return 0;
}