#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

void add_to_head(node* &head,int val){
  node* n = new node(val);
  n->next = head;
  head = n;
  if(head == NULL){
    head = n;
  
  }
}
void insert(int val,node* &head,int position){ 
    node* n = new node(val); 
    if(position == 0){
        n->next = head;
        head = n;
        return;     
    }
    
    node* prev = head;
    for(int i = 0; i<(position-1);i++){
        prev = prev->next;
    }
    n->next= prev->next; 
    prev->next=n;
    
}
void add_to_end(node* &head, int val){
    node* n = new node(val);
    if (head==NULL){
        head = n;
    }
    node* temp = head;  
    while (temp->next!=NULL){
        temp =temp->next;
    }
    temp->next=n;
}
void deleteHead(node* &head){
    node* deleteNode = head;
    head = head->next;
    if(head==NULL){
        return;
    }
    delete deleteNode;
    }
void deleteVal(node* &head,int val){
    node* temp = head;
    if(head== NULL){
        return;
    }
    if(head->data=val){
       deleteHead(head);
       return;
    }
    
    while(temp->next->data!=val){  
        temp=temp->next;
    }
    if(temp == NULL ){
        cout<<"Node with val "<<val<<" doesnt exist."<<endl;
        return;
    }
    node* deleteNode = temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    
}

void display( node* temp){
    int count = 0;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
        count++;
    }
    cout<<"NULL"<<endl;
    cout<<"total elements in the linked list : "<<count<<endl;
}
int main(){
   node* head = NULL;
   add_to_head(head,2);
   add_to_head(head,1);
   add_to_head(head,7);
   add_to_head(head,9);
   add_to_end(head,0);
   add_to_end(head,8);
   add_to_end(head,3);
   insert(12,head,5);
   display(head);
   deleteHead(head);
   display(head);
   deleteVal(head,7);
   display(head);

}