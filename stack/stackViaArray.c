#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int * arr;
    int top;
};
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int push(struct stack * p1,int value){
    if(isFull(p1)){
        printf("stack overflow");
    }
    else{
        p1->top++;
        p1->arr[p1->top]=value;
        return value;
    }
}
int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=20;
    s->arr=(int *)malloc(s->size * sizeof(int));
    // s->arr[0]=7;
    // s->top++;
    
    if(isEmpty(s)){
        printf("stack is empty\n");
    }
    else{
        printf("stack is not empty\n");

    }
        if(isFull(s)){
        printf("stack is full\n");
    }
    else{
        printf("stack is not full\n");

    }
    printf("pushed at index %d the value %d",s->top+1,push(s,4));
}