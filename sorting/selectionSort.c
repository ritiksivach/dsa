#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min=i;
        int temp;
        for (int j = i + 1; j < n; j++)
        {
            if (A[min] > A[j])
            {
                min = j;
            }
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}
int main()
{
    int A[] = {8, 2, 9, 15, 4, 3};
    int n = 6;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}