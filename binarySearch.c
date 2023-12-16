#include <stdio.h>

int binarySeach(int arr[], int len, int a)
{
    int last = len - 1;
    int initial = 0, m;
    while (initial <= last)
    {
        m = (initial + last) / 2;
        if (a == arr[m])
        {
            return m;
        }
        else if (a < arr[m])
        {
            last = m - 1;
        }
        else if (a > arr[m])
        {
            initial = m + 1;
        }
    }

    return -1;
}

void main()
{
    int arr[] = {1, 5, 8, 10, 91};
    int n = 91;
    int size=sizeof(arr)/sizeof(arr[0]);
    int index = binarySeach(arr, size, n);
    if (index != -1)
    {
        printf("The number is present at index value %d.\n", index);
    }
    else
    {
        printf("The number is not present.\n");
    }
}