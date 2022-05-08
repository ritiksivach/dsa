#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
void getvalue(struct node * ptr){
    printf("enter data for a node");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
}
    
int llt(struct node * ptrr,int c){
    do{
       c+=1;
       ptrr=ptrr->next;
   }
   while(ptrr!=NULL);
   return c;
}
struct node* addll(struct node * list1,struct node * list2,int co){
    int store1=0;
    int store2=0;
    do{
        store1=(store1*10)+list1->data;
        store2=(store2*10)+list2->data;
        list1=list1->next;
        list2=list2->next;
    }while(list1!=NULL );
    
    int r=store1+store2;
    struct node * rs=NULL;
    struct node * t3=NULL;
    for (int i = 0; i < co; i++)
    {
    
    if(i==0){
        rs=(struct node *)malloc(sizeof(struct node));
        rs->next=NULL;
         rs->data=r%10;
     r=(r-(rs->data))/10;
    
    }
    else{
        t3=(struct node *)malloc(sizeof(struct node));
    t3->data=r%10;
    t3->next=rs;
     r=(r-(t3->data))/10;
    rs=t3;
    }
}
    return rs;
}
void pll(struct node * res){
    do{
        printf("%d\n",res->data);
        res=res->next;
    }while(res!=NULL);
}
void main(){
    int s1,s2;
    printf("Enter size of 1st ll");
    scanf("%d",&s1);
    struct node* list1=NULL;
    struct node* t1=NULL;
    for (int i = 0; i < s1; i++)
    {
    
    if(i==0){
        list1=t1=(struct node *)malloc(sizeof(struct node));
        getvalue(t1);
    }
    else{
        t1->next=(struct node *)malloc(sizeof(struct node));
        getvalue(t1->next);
        t1=t1->next;
    }

    }
        printf("Enter size of 2nd ll");
    scanf("%d",&s2);
     struct node* list2=NULL;
    struct node* t2=NULL;
    for (int i = 0; i < s2; i++)
    {
   
    if(i==0){
        list2=t2=(struct node*)malloc(sizeof(struct node*));
        getvalue(t2);
    }
    else{
        t2->next=(struct node*)malloc(sizeof(struct node*));
        getvalue(t2->next);
        t2=t2->next;
    }

    }
    int c=0;
    int co=llt(list1,c);
    struct node * res=(struct node*)malloc(sizeof(struct node*));
    res=addll(list1,list2,co);
    pll(res);
}