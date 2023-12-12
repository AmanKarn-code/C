#include <stdio.h>

void main()
{
    int j, i;
    for (i = 2; i < 100; i++)
    {
        int n = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                n++;
                break;
            }
        }
        if (n == 0)
        {
            printf("%d ", i);
        }
    }
}