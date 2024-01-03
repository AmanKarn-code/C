#include <stdio.h>
#include <stdlib.h>

struct s
{
    int i;
    struct s *next;
};
struct s *h, *p, *p1;
int t;
void insertAfter()
{
    h = (struct s *)malloc(sizeof(struct s));
    p = (struct s *)malloc(sizeof(struct s));
    p1 = (struct s *)malloc(sizeof(struct s));

    printf("enter the node u want to add/inert :- ");
    scanf("%d", &p->i);
    printf("enter the no after which u want to add :- ");
    scanf("%d", &t);
   p1=h;
    while (p1->next != NULL)
    {
        if (p1->i == t)
        {
            p->next=p1->next;
            p1->next=p;
            break;
        }
        if (p1->next == NULL)
        {
            printf("ERROR:404 || the no is not preent in the given ll.");
            break;
        }
            p1 = p1->next;
    }
}
// Function to print the linked list
void printList(struct s *head)
{
    struct s *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->i);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    h = (struct s *)malloc(sizeof(struct s));
    h->i = 1;
    h->next = NULL;

    struct s *current = h;
    for (int i = 2; i <= 6; ++i)
    {
        current->next = (struct s *)malloc(sizeof(struct s));
        current = current->next;
        current->i = i;
        current->next = NULL;
    }

    // Print the original linked list
    printf("Original ");
    printList(h);

    // Insert a node after a given value
    insertAfter();

    // Print the linked list after insertion
    printf("After Insertion ");
    printList(h);

    return 0;
}
