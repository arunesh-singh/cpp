#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=next;
    }
};

int lenght(Node *head){
    Node*temp = head;
    int count = 0 ; 
    do{
        count++;
        temp = temp->next;
    }while( temp != head )

    return count;
}

void print(Node * head){
    Node *cur=head;
    while(cur!=head){
        cout<<cur->data<<"-->";
        cur=cur->next;
    }
    cout<<"NULL"<<endl;
}

void inserAtTail(Node* &head,int val){
    Node* n= new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next = head;
    temp->next = n;
    
}

void insertAtHead(Node* &head,int val){
    Node* n= new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next = head;
    temp->next = n;
    head = n;
}

insertAfter(Node* &prev,int val){
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
    Node* cur = head;
    while(temp->next!= head){
        temp = temp->next;
    }
    temp->next = head->next;
    head=head->next;

    delete cur;
}

void deleteLast(Node* &head){
    Node *temp = head;
    Node *cur;
    while(temp->next!=head){
        cur = temp;
        temp = temp->next;
    }
    cur->next = head;
    
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

Node* reverseRecur(Node* &head){

    if(head== NULL || head->next == NULL){
        return head;
    }
    Node * newhead = reverseRecur(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

Node* reverseKNode(Node* &head,int k ){
    Node* cur=head;
    Node* prev=NULL;
    Node* nextp;

    int count = 0;

    while(cur!=NULL && count<k){
        nextp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextp;
        count++;
    }

    if(nextp!=NULL){
        head->next = reverseKNode(nextp,k);
    }
    
    return prev;
}

/* void makeCycle(Node* & head){
    Node * startN = head;
    Node * 
} */

bool detectCycle(Node* &head){
    Node * slow = head;
    Node * fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
            return true;
    }
    return false;
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
    
    Node* newHead=reverseRecur(head);
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