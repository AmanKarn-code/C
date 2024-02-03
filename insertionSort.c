#include <stdio.h>

void main()
{

    // creating the array
    int n;
    printf("Enter the length ofthe array u want to create :- ");
    scanf("%d", &n);
    int a[n];
    printf("An array of %d length has been created.\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the value at index %d. ", i);
        scanf("%d", &a[i]);
    }

    // sorting of the created array
    for (int i = 0; i < n; i++)
    {
        int temp = a[i], j;
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }

    // printing the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}