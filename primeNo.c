#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n <= 1 || n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, j = 0;
    printf("enter the no u want to check :- ");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            j++;
        }
    }
    if (j == 1)
    {
        printf("prime\n");
    }
    else
    {
        printf("non-prime\n");
    }

    // prime in a range
    printf("printing all the prime no between 1-100\n");
    for (int i = 2; i < 100;i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}
