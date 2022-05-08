#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int start = low + 1;
    int end = high;
    int temp;
    do
    {
        while (A[start] <= pivot)
        {
            start++;
        }
        while (A[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    } while (start < end);

    temp = A[end];
    A[end] = A[low];
    A[low] = temp;
    return end;
}
void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int index = partition(A, low, high);
        quickSort(A, low, index - 1);
        quickSort(A, index + 1, high);
    }
}
int main()
{
    int A[] = {8, 2, 9, 15, 4};

    int n = sizeof(A)/sizeof(int);
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}