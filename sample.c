#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>

// bool isPalindrome(int x) {
//     int original = x;
//     float reversed = 0;

//     while (x > 0) {
//         int digit = x % 10;
//         reversed = reversed * 10 + digit;
//         x = x / 10;
//     }

//     return original == reversed;
// }

// int main() {  // Change void to int for the main function
//     if (isPalindrome()) {
//         printf("The number is a palindrome.\n");
//     } else {
//         printf("The number is not a palindrome.\n");
//     }

//     return 0;
// }

struct s
{
    int i;
    struct s *next;
} struct d *h, *p, *p1;
void insertBefore()
{

    if (h == NULL)
    {
        printf("First create the node\n");
    }
    else
    {
        int n;
        printf("enter the no bfore which u want to insert.\n");
        scanf("%d", &n);
        p = malloc(sizeof(struct s));
        p1 = malloc(sizeof(struct s));
        printf("Create the node.\n");
        scanf("%d", &p->i);
        p1 = h;
        while (p1->next != NULL)
        {
            if ((p1->next)->i == n)
            {
                break;
            }
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("no node found.\n");
        }
        else
        {
            if (h->i == n)
            {
                p->next = h;
                h = p;
            }
            else
            {
                p->next = p1->next;
                p1->next = p;
            }
        }
    }
}