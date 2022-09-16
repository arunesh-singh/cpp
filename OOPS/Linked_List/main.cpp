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

void print(Node * &head){
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

int getLenght(Node* head){
    Node* cur = head;
    int i = 0;
    while(cur!=NULL){
        i++;
        cur = cur->next;
    }
    return i;
}

Node* kFromEnd(Node* head , int k){
    int i;
    Node* cur = head , *kthNode = head;

    if(k> getLenght(head))
        return NULL;
    for(i=0 ; i<k-1 ; i++)
        cur = cur->next;

    while(cur->next != NULL){
        cur = cur->next;
        kthNode = kthNode->next;
    }

    return kthNode;
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
    
    // Node* newHead=reverseRecur(head);
    deletion(head , 1);
    print(head);
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