#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int d){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=d;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preOrder(struct node* p){
    if(p!=NULL){
        printf("%d\n",p->data);
        preOrder(p->left);
        preOrder(p->right);
    }
}
int main(){
    // struct node *p=(struct node *)malloc(sizeof(struct node));
    // p->data=2;
    // p->left=NULL;
    // p->right=NULL;
    struct node* p;
    p=createNode(2);

    struct node* p1;
    p1=createNode(1);

    struct node* p2;
    p2=createNode(4);

    struct node* p3;
    p3=createNode(11);

    struct node* p4;
    p4=createNode(12);

    struct node* p6;
    p6=createNode(3);

    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;
    p2->left=NULL;
    p2->right=p6;

    preOrder(p);
    return 0;
}