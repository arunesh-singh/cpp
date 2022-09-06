#include <iostream>
using namespace std;

template<typename T> class Node{
    public:
    T data;
    Node * next;
    Node * prev;

    Node(T val){
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

void insertAtHead(Node* &head , T val){

    Node* newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void insertAtEnd(Node* &head , T val){

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

void insertAtMid(Node* prev , T val ){

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

bool search(Node* head , T val){
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

void menu(Node* head){

    cout<<"\n\tMenu Driven Program for LinkedList"<<endl;
    cout<<"\nSelect the operation to perforn\n the respective operation : "<<endl;
    cout<<"\n1. Insert At Head \n";
    cout<<"2. Insert At Tail \n";
    cout<<"3. Insert At Mid \n";
    cout<<"4. Delete First \n";
    cout<<"5. Delete Last \n";
    cout<<"6. Delete Mid \n";
    cout<<"7. Search A Node \n";
    cout<<"8. Display the Node \n";
    cout<<"0. Exit \n";

    int n;
    cout<<"\n Enter your choice :";
    cin>>n;

    cout<<"\nEnter the datatype of the node(\n1. int\n2. char\n3. float\n4. bool) :";
    int ch;
    switch (ch)
    {
    case 1:
        int val;
        cout<<"Enter value of node :";
        cin>>val;
        break;
    
    case 2:
        char val;
        cout<<"Enter value of node :";
        cin>>val;
        break;
    
    case 3:
        float val;
        cout<<"Enter value of node :";
        cin>>val;
        break;
    
    case 4:
        bool val;
        cout<<"Enter value of node :";
        cin>>val;
        break;
    
    default:
        cout<<"Enter valid option.\n";
        break;
    }

    switch (n)
    {
    case 1:
        insertAtHead(head,val);
        break;
    
    case 2:
        insertAtEnd(head,val);
        break;
    
    case 3:
        int pos;
        cout<<"Enter the position to be deleted :";
        cin>>pos;
        insertAtMid(head,val, pos);
        break;
    
    case 4:
        deleteFirst(head);
        break;
    
    case 5:
        deleteLast(head);
        break;
    
    case 6:
        deleteMid(head,val);
        break;
    
    case 7:
        if(search(head,3))
            cout<<"Yes\n";
        else
            cout<<"NO"<<endl;
        break;
    
    case 8:
        print(head);
        break;
    
    case 1:
        return;
    
    default:
        cout<<"Enter Valid Choice Mister/Misses\n";
        break;
    }
    return menu(head);
}

int main(){

    Node* head = NULL;

    menu(head);

    
/* 
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

    print(head); */

    
}
