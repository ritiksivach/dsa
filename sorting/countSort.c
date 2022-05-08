#include<stdio.h>
#include <stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int maximum(int *A,int n){
    int max=A[0];
    for (int i = 1; i < n; i++)
    {
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}
void countSort(int A[],int n){
    int max=maximum(A,n);
    int *count=(int *)malloc(sizeof(int)*(max+1));
    for (int i = 0; i < max+1; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }
    int i=0;//for loop in count array
    int j=0;//for positioning in A while putting sorted elements one by one
    while (i<=max)
    {
        if(count[i]>0){
            A[j]=i;
            j++;
            count[i]--;
        }
        i++;
    }   
    
}
int main()
{
    int A[] = {8, 2, 9, 15, 4,100};
    int n = sizeof(A) / sizeof(int);
    printArray(A, n);
    countSort(A,n);
    printArray(A, n);
    return 0;
}