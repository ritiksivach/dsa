#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
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
// void inOrder(struct node* p){
//     if(p!=NULL){
//         inOrder(p->left);
//         printf("%d\n",p->data);
//         inOrder(p->right);
//     }
// }
// void postOrder(struct node* p){
//     if(p!=NULL){
//         postOrder(p->left);
//         postOrder(p->right);
//         printf("%d\n",p->data);
//     }
// }

int check(struct node* root, struct node* min , struct node* max){
        if(root==NULL){
            return 1;
        }
        if(min!=NULL && root->data<=min->data){
            return 0;
        }
        if(max!=NULL && root->data>=max->data){
            return 0;
        }
        int l=check(root->left,min,root);
        int r=check(root->right,root,max);
        return l && r ;
}
int main(){
    // struct node *p=(struct node *)malloc(sizeof(struct node));
    // p->data=2;
    // p->left=NULL;
    // p->right=NULL;

    // tree1
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

// tree1 end

// tree 2
//    struct node* p;
//     p=createNode(12);

//     struct node* p1;
//     p1=createNode(6);

//     struct node* p2;
//     p2=createNode(14);

//     struct node* p3;
//     p3=createNode(3);

//     struct node* p4;
//     p4=createNode(8);

//     struct node* p6;
//     p6=createNode(17);

//     p->left=p1;
//     p->right=p2;

//     p1->left=p3;
//     p1->right=p4;
//     p2->left=NULL;
//     p2->right=p6;

// tree2 end

    // inOrder(p);
    // printf("\n");
    // postOrder(p);
    if(check(p, NULL, NULL)){
        printf("is bst");
    }
    else{
        printf("not bst");
    }
    return 0;
}