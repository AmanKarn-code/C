#include <stdio.h>

void main()
{
    int arr[5], t;
    int size = sizeof(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d no. ", i + 1);
        scanf("%d", &arr[i]);
    }

    // printing the array u have entered
    printf("printing the array u have entered");
    printf("[");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]\n");

    // sorting
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    // printing the sorted array u have entered
    printf("printing the sorted array u have entered");
    printf("[");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
     printf("]\n");
}