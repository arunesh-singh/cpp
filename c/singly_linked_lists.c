#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int data;
  struct ListNode *next;
};

void print(struct ListNode *head){
  struct ListNode *cur = head;

  while(cur != NULL){
    printf("%d", cur->data);
    printf(" -> ");
    cur = cur->next;
  }
  printf("NULL\n");
}

int lenght(struct ListNode *head){
  struct ListNode *cur = head;
  int count = 0;
  while(cur != NULL){
    count++;
    cur = cur->next;
  }
  return count;
}

void deleteListedList(struct ListNode **head){
  struct ListNode *auxilaryNode, *iterator;
  iterator = *head;
  while(iterator){
    auxilaryNode = iterator->next;
    free(iterator);
    iterator = auxilaryNode;
  }
  *head = NULL;
}

struct ListNode *insert_at_head(struct ListNode *head, int data){
  struct ListNode *temp;
  temp = (struct ListNode *)malloc(sizeof(struct ListNode));
  temp->data = data;
  temp->next = NULL;
  
  if(!head){
    head = temp;
    head->next = NULL;
  }else{
    temp->next = head;
    head = temp;
  }

  return head;
}

struct ListNode *inser_at_tail(struct ListNode *head, int data){
  struct ListNode *temp;
  temp = (struct ListNode *)malloc(sizeof(struct ListNode));
  temp->data = data;
  temp->next = NULL;

  if(!head){
    head = temp;
  }else{
    struct ListNode *cur;
    cur = head;
    while(cur->next != NULL){
      cur = cur->next;
    }
    cur->next = temp;
  }
  return head;
}

struct ListNode *insert(struct ListNode *head, struct ListNode *new, int pos){
  struct ListNode *prev= head;

  if(pos <= 1){
    new->next = head;
    return new;
  }
  while(--pos && prev != NULL){
    prev = prev->next;
  }
  
  if(prev == NULL){
    return NULL;
  }
  new->next = prev->next;
  prev->next = new;

  return head;
}

void delete_head(struct ListNode **head){
  struct ListNode *temp;
  if(*head == NULL){
    return;
  }
  temp = *head;
  *head = (*head)->next;
  free(temp);
  return;
}

void delete_tail(struct ListNode **head){
  struct ListNode *temp, *cur;
  if(*head == NULL){
    return;
  }
  cur = (*head);
  while(cur->next->next != NULL){
    cur = cur->next;
  }
  temp = cur->next;
  free(temp);
  cur->next = NULL;
  return;
}

void delete(struct ListNode **head, int pos){
  int k = 1;
  struct ListNode *p, *q;
  if(*head == NULL){
    printf("List Empty");
    return;
  }
  p = *head;
  if(pos == 1){
    *head = (*head)->next;
    free(p);
    return;
  }
  else {
    while((p!= NULL) && k< pos){
      k++;
      q = p;
      p = p->next;
    }
    if(p == NULL){
      printf("Position does not exist.\n");
      return;
    }else {
      q->next = p->next;
      free(p);
    }
    return;
  }
}

int main(){
  struct ListNode *head = NULL;
  
  head = inser_at_tail(head, 1);
  head = inser_at_tail(head, 2);
  head = inser_at_tail(head, 3);
  head = inser_at_tail(head, 4);
  head = inser_at_tail(head, 5);

  head = insert_at_head(head, 0);

  struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
  newNode->data = 6;
  head = insert(head, newNode , 3);

  print(head);

  delete_head(&head);
  delete_tail(&head);
  delete(&head, 3);
  
  print(head);
  deleteListedList(&head);
  print(head);

  return 0;
}