#include <stdio.h>
#include <stdlib.h>

struct DLLNode {
  int data;
  struct DLLNode *prev;
  struct DLLNode *next;
};

void print(struct DLLNode *head){
  struct DLLNode *cur= head;
  while(cur != NULL){
    printf("%d", cur->data);
    printf(" -> ");
    cur = cur->next;
  }
  printf("NULL\n");
}

void insert_at_head(struct DLLNode **head, int data){
  struct DLLNode *curr = *head;
  struct DLLNode *newNode = (struct DLLNode *)(malloc(sizeof(struct DLLNode)));
  if(!newNode){
    printf("Memory Error");
    return;
  }
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  if(curr == NULL){
    *head = newNode;
    return;
  }
  newNode->next = *head;
  (*head)->prev = newNode;
  *head = newNode;
}

void insert_at_tail(struct DLLNode **head, int data){
  struct DLLNode *curr = *head, *prev;
  struct DLLNode *newNode = (struct DLLNode *)(malloc(sizeof(struct DLLNode)));
  if(!newNode){
    printf("Memory Error");
    return;
  }
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  if(*head == NULL){
    *head = newNode;
    return;
  }
  while(curr->next != NULL)
    curr = curr->next;
  
  curr->next = newNode;
  newNode->prev = curr;
}

void insert(struct DLLNode **head, int data, int pos){
  int k = 1;
  struct DLLNode *cur;
  struct DLLNode *newNode = (struct DLLNode *)(malloc(sizeof(struct DLLNode)));
  if(!newNode){
    printf("Memory Error");
    return;
  }
  newNode->data = data;
  newNode->prev = NULL;
  newNode->prev = NULL;
  if(pos == 1){
    newNode->next = *head;
    if(*head)
      (*head)->prev = newNode;
    *head = newNode;
    return;
  }
  cur = *head;
  while(k<pos -1 && cur->next != NULL){
    cur = cur->next;
    k++;
  }
  if(k < pos - 1){
    printf("Desired position does't exist\n");
    return;
  }
  newNode->next = cur->next;
  newNode->prev = cur;
  if(cur->next)
    cur->next->prev = newNode;
  return;
}

void delete_head(struct DLLNode **head){
  if(!head){
    printf("List is Empty");
    return;
  }
  struct DLLNode *temp= *head;
  (*head)->next->prev = NULL;
  *head = (*head)->next;
  free(temp);
  return;
}

void delete_tail(struct DLLNode **head){
  struct DLLNode *cur = *head, *temp = *head;
  if(*head == NULL){
    printf("List Empty");
    return;
  }
  while(cur->next != NULL)
    cur = cur->next;
  temp = cur->prev;
  temp->next = cur->next;
  free(cur);
  return;
}

void delete(struct DLLNode **head, int pos){
  int count =0;
  struct DLLNode *cur = *head, *temp;
  while( count < pos && cur->next != NULL){
    count++;
    cur = cur->next;
  }
  temp = cur;
  printf("pos: %d \t data: %d\n", pos, cur->data);
  if(cur->next == NULL){
    cur->prev == NULL;
  }else {

    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    
  }
  free(temp);

}

int main(){
  struct DLLNode *head = NULL;

  insert_at_head(&head, 4);
  insert_at_head(&head, 3);
  insert_at_head(&head, 2);
  insert_at_head(&head, 1);

  insert_at_tail(&head, 5);

  print(head);

  insert(&head, 7, 3);
  
  delete_head(&head);
  
  print(head);
  
  delete(&head,3);
  
  
  print(head);

  return 0;
}