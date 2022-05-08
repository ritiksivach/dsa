#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void merge(int A[], int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int k = l;
    int B[100];
    while (i <= m && j <= h)
    {
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= h)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (int i = l; i <=h; i++)
    {
        A[i]=B[i];
    }
    
}
void mergeSort(int A[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}
int main()
{
    int A[] = {8, 2, 9, 15, 4};
    int n = sizeof(A) / sizeof(int);
    printArray(A, n);
    mergeSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}