#include <stdio.h>
#include <stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int *A, int n)
{
    int temp,isSorted=0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("working for pass %d\n",i+1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            isSorted=1;
                if (A[j] > A[j+1])
                {
                    // swap(A[j],A[k]);
                    isSorted=0;
                    swap(A+j,A+j+1);//elements of array sent by using the concept of 'array as a pointer' and swaping them
                }
        }
        if(isSorted){
            return;
        }
    }
}
int main()
{
    int A[] = {2,3,4,8,7};
    int n = sizeof(A)/sizeof(A[0]);
    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);
    return 0;
}