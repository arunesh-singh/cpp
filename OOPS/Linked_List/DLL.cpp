#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void print( Node * head ){
    Node* cur = head;
    while(cur != NULL){
        cout<<cur->data<<"->";
        cur = cur->next;
    }cout<<endl;
}

void insertAtHead(Node* &head , int val){

    Node* newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void insertAtEnd(Node* &head , int val){

    Node* newNode = new Node(val);
    Node* last = head;
    
    if( head == NULL ){
        head = newNode;
        return;
    }
    else{
        while(last->next != NULL)
            last = last->next;
        
        last->next = newNode;
        newNode->prev = last;
    }
    
}

void insertAtMid(Node* prev , int val ){

    Node* newNode = new Node(val);

    if( prev == NULL ){
        prev = newNode;
        return;
    }
    newNode->next = prev->next;
    prev->next->prev = newNode;
    newNode->prev = prev;
    prev->next = newNode;

}

bool search(Node* head , int val){
    Node* temp = head;
    while(temp != NULL ){
        if( temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

void deleteFirst(Node* &head ){

    if(head == NULL)
        return;
    Node *temp = head;
    
    head = head->next;
    head->prev = NULL;
    delete temp;
}

void deleteLast(Node* &head ){

    if(head == NULL)
        return;

    if(head->next == NULL ){
        delete head;
        return;
    }

    Node* prev = head;
    while(prev->next->next!=NULL)
        prev= prev->next;
    
    Node* temp = prev->next;
    prev->next = NULL;
    delete temp;

}

void deleteMid(Node* &head , int pos){

    if(head == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node *temp = head;
    if( pos == 1){
        head = head->next;
    }
    if( head!= NULL ){
        head->prev = NULL;
        delete temp;
        return;
    }
    
    int k = 1;
    Node *temp2;
    while(temp != NULL && k < pos ){
        k++;
        temp = temp->next;
    }
    if( k < pos -1 ){
        cout<<"Position doesn't exit."<<endl;
        return;
    }

    temp2 = temp->prev;
    temp2->next = temp->next;
    if(temp->next)
        temp->next->prev = temp2;

    delete temp;

}

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* cur = head;
    Node* n;

    while(cur != NULL){
        n = cur->next;
        cur->next = prev;
        prev = cur;
        cur = n;
    }
    return prev;
}

Node* reverseRecur(Node* &head){

    if(head == NULL || head->next == NULL )
        return head;
    
    Node* newHead = reverseRecur(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main(){

    Node* head = NULL;

    insertAtHead(head,1);

    insertAtEnd(head,2);
    insertAtEnd(head,4);
    insertAtEnd(head,5);

    
    print(head);

    Node* newHead = reverseRecur(head);

    print(newHead);

    if(search(head,4))
        cout<<"Yes\n";
    else
        cout<<"NO"<<endl;

    deleteFirst(head);
    deleteLast(head);
    deleteMid(head,1);

    print(head);

    if(search(head,3))
        cout<<"Yes\n";
    else
        cout<<"NO"<<endl;
}
