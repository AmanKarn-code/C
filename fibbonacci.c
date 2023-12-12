#include <stdio.h>

// Q1. printimng the n terms odf fibbonacci series;
void fibNNo(int n)
{
    int a = 0, b = 1, c;
    printf("The fibbonacci series till the %d is %d %d",n, a, b);
    for (int i = 0; i < n - 2; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
}

// Q2. Print the nth term of the fibbonaci series
int fibNTerm(int n)
{
    int a = 0, b = 1, c;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int a;
    printf("Enter the number of terms you want:\n");
    scanf("%d", &a);
    fibNNo(a);
    printf("\nThe %dth term in fibbonacci series is :- %d", a, fibNTerm(a));
    return 0;
}
