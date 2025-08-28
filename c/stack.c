#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack {
  int top;
  int capacity;
  int* array;
};

struct Stack *createStack(int capacity){
  struct Stack *S = malloc(sizeof(struct Stack));
  if(!S) return NULL;
  S->capacity = capacity;
  S->top = -1;
  S->array = malloc(S->capacity * sizeof(int));
  if(!S->array) return NULL;
  return S;
}
 
int isEmpty(struct Stack *S){
  return (S->top == -1);
}

int size(struct Stack *S){
  return (S->top + 1);
}

int isFull(struct Stack *S){
  return (S->top == S->capacity -1);
}

void doubleStack(struct Stack *S, int data){
  S->capacity *= 2;
  S->array = realloc(S->array, S->capacity * sizeof(int));
}

void push(struct Stack *S, int data){
  if(isFull(S)){
    printf("Stack Overflow\n");
  }
  else {
    S->array[++S->top] = data;
  }
}

int pop(struct Stack *S){
  if(isEmpty(S)){
    printf("Stack Underflow\n");
    return INT_MIN;
  }else {
    return (S->array[S->top--]);
  }
}

int peek(struct Stack *S){
  if(isEmpty(S)){
    printf("Stack is Emplty!");
    return INT_MIN;
  }
  return S->array[S->top];
}

void deleteStack(struct Stack *S){
  if(S && S->array){
    free(S->array);
    free(S);
  }
}

int main(){
  int i=0, capacity = INT_MIN;
  char op = '';

while(op != 'e'){

  
  printf("Enter the size of the stack: ");
  scanf("%d", capacity);
  
  struct Stack *stk = createStack(capacity);
  
}

}