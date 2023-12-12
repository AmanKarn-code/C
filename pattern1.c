// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <stdio.h>
#include <conio.h>
void pattern1(int n)
{
    int a, b, c = 1;

    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf(" %d", c);
            c++;
        }
        printf("\n");
    }
    getch();
}
void main()
{
    int n;
    printf("enter the no of rows\n");
    scanf("%d", &n);
    pattern1(n);
}