#include <iostream>
using namespace std;

template <class T>
class Node{
    public:
    T data;
    Node<T>* next;

    Node(T val){
        data=val;
        next=NULL;
    }
};

template<class T>
void inserAtTail(Node<T>* &head,T val){
    Node<T>* n= new Node<T>(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    Node<T>* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}
template<class T>
void print(Node<T> * &head){
    Node<T> *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<"NULL"<<endl;
}
template<class T>
void insertAtHead(Node<T>* &head,int val){
    Node<T>* n=new Node<T>(val);
    n->next=head;
    head=n;
}
template<class T>
insertAfter(Node<T>* &prev,int val){
    if(prev==NULL){
        cout<<"Previous cannot be NULL \n";
    }
    Node<T>* n=new Node<T>(val);
    n->next=prev;
    prev=n;
}
/* 
bool search(Node<T>* head,int key){
    Node<T>* temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}
 */
template<class T>
void deleteHead(Node<T>* &head){
    Node<T>* temp=head;
    head=head->next;

    delete temp;
}
template<class T>
void deletion(Node<T>* &head,T val){
    
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleteHead(head);
        return;
    }
    Node<T>* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node<T>* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
/* 
Node* reverse(Node<T>* &head){
    Node<T>* cur=head;
    Node<T>* prev=NULL;
    Node<T>* nextp;
    while(cur!=NULL){
        nextp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextp;
    }
    return prev;
}

Node* reverseRecur(Node<T>* &head){

    if(head== NULL || head->next == NULL){
        return head;
    }
    Node<T> * newhead = reverseRecur(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

Node<T>* reverseKNode(Node<T>* &head,int k ){
    Node<T>* cur=head;
    Node<T>* prev=NULL;
    Node<T>* nextp;

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
 */
/* void makeCycle(Node* & head){
    Node * startN = head;
    Node * 
} */
/* 
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
 *//* 
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

Node* Concatenate()
 */


int main(){
    Node<int> * head=NULL;

    inserAtTail<int>(head,1);
    inserAtTail<int>(head,2);
    inserAtTail<int>(head,3);
    //print(head);

    insertAtHead<int>(head,0);
    insertAtHead<int>(head,-1);

    print<int>(head);
    
    // Node* newHead=reverseRecur(head);
    deletion<int>(head , 1);
    print<int>(head);
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