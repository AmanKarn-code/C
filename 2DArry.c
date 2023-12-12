#include <stdio.h>

void main()
{
    int a[4][4], n = 5, k = 0, g = 0, l, m, s = 0;

    // taking the input from the user
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the (%d,%d) number.", i, j);
            scanf("%d", &a[i][j]);
            g = a[1][2];
        }
    }

    // normal printing of an aarray
    printf("printing the original array\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // // checking if the number is present in the array and returning its index value
    // printf("returning the index of the given no.\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (n == a[i][j])
    //         {
    //             printf("true (%d , %d)", i, j);
    //             k++;
    //             break;
    //         }
    //     }
    // }
    //     if(k==0)
    //         {
    //             printf("false (-1 , -1)");
    //         }

    // // printing the transpose of an array(column=row and row=column)
    // printf("printing the transpose of the original array\n");
    //  for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d " ,a[j][i]);
    //     }
    //     printf("\n");
    // }

    // // finding the greatest no in a 2d array
    // printf("returning the greatest no :- ");
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (a[i][j] > g)
    //         {
    //             g = a[i][j];
    //             l=i;
    //             m=j;
    //         }
    //     }
    // }
    // printf("%d (%d,%d)", g,l,m);

    // // printing the sum of the diagonal in a sq matrix
    // printf("printing the sum of the diagonal in a sq matrix :- ");
    // for (int i = 0; i < 4; i++)
    // {
    //     for(int j=0;j<4;j++){
    //         if(i==j){
    //             s+=a[i][j];
    //         }
    //     }
    // }
    // printf("%d .",s);

    // // printing the sum of row / column
    // printf("printing the sum of row \n");
    // for (int i = 0; i < 4; i++)
    // {
    //     s = 0;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         for (int k = 0; k < 4; k++)
    //         {
    //             s += a[i][j]; // interchange i and j and we will get the sum of each column
    //             break;
    //         }
    //     }
    //     printf("%d ", s);
    // }

    // printing the diagonal in a sq matrix
    printf("printing the diagonal in a sq matrix :- ");
    for (int i = 0; i < 4; i++)
    {
        k = 0;
        l = 3;
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[k][l]);
            k++;
            l--;
        }
        break;
    }
}