
// Fibonacci Series using Recursion
#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n==2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    //   printf("%d", fib(n));
    for (int i = 1; i <=100; i++)
    {
        printf("%d ",fib(i));
    }
    
    return 0;
}