#include <stdio.h>
#include <stdlib.h>

struct d
{
    struct d *prev;
    int i;
    struct d *next;
};
struct d *h, *t, *p, *p1;

// inserting the node at the end
void insertEnd()
{
    if (h == NULL && t == NULL)
    {
        p = malloc(sizeof(struct d));
        printf("enter the node u want to insert in the end :- ");
        scanf("%d", &p->i);
        h = p;
        t = p;
        p->next = NULL;
        p->prev = NULL;
        printf("Since ther is no node hence %d is the first node.\n", p->i);
    }
    else
    {
        p1 = malloc(sizeof(struct d));
        printf("enter the node u want to insert in the end :- ");
        scanf("%d", &p1->i);
        t->next = p1;
        p1->prev = t;
        p1->next = NULL;
        p1 = t;
    }
}

// inserting the node at the begining/start
void insertStart()
{
    if (h == NULL && t == NULL)
    {
        p = malloc(sizeof(struct d));
        printf("enter the node u want to insert in the Start :- ");
        scanf("%d", &p->i);
        h = p;
        t = p;
        p->next = NULL;
        p->prev = NULL;
        printf("Since ther is no node hence %d is the first node.\n", p->i);
    }
    else
    {
        p1 = malloc(sizeof(struct d));
        printf("enter the node u want to insert in the Start :- ");
        scanf("%d", &p1->i);
        h->prev = p1;
        p1->next = h;
        p1->prev = NULL;
        h = p1;
    }
}

// inserting the node after the value
void insertAfter()
{
    int n;
    struct d *q;
    printf("Enter the value after which u want to add the node :- ");
    scanf("%d", &n);
    p = malloc(sizeof(struct d));
    p1 = malloc(sizeof(struct d));
    q = malloc(sizeof(struct d));
    printf("Enter the node u want to insert after %d :- ", n);
    scanf("%d", &p->i);
    p1 = h;
    while (p != NULL)
    {
        if (p1->i == n)
        {
            break;
        }
        p1 = p1->next;
    }
    q = p1->next;
    if (p1 == NULL)
    {
        printf("ERROR: %d is not present in the list.\n", n);
    }
    else
    {
        if (p1 == t)
        {
            t->next = p;
            p->prev = t;
            p->next = NULL;
            t = p;
            printf("Since %d is the last term hence %d becomes the last term.\n", n, p->i);
        }
        else
        {
            p->prev = p1;
            p->next = q;
            p1->next = p;
            q->prev = p;
        }
    }
}

// inserting before the value
void insertBefore()
{
    int n;
    struct d *q;
    printf("Enter the value before which u want to add the node :- ");
    scanf("%d", &n);
    p = malloc(sizeof(struct d));
    p1 = malloc(sizeof(struct d));
    q = malloc(sizeof(struct d));
    printf("Enter the node u want to insert before %d :- ", n);
    scanf("%d", &p->i);
    p1 = h;
    while (p != NULL)
    {
        if (p1->i == n)
        {
            break;
        }
        p1 = p1->next;
    }
    q = p1->prev;
    if (p1 == NULL)
    {
        printf("ERROR: %d is not present in the list.\n", n);
    }
    else
    {
        if (p1 == h)
        {
            p->next = h;
            h->prev = p1;
            p1->prev = NULL;
            h = p;
            printf("Since %d is the first term hence %d becomes the first term.\n", n, p->i);
        }
        else{
            p->next=p1;
            p->prev=q;
            q->next=p;
            p1->prev=p;
        }
    }
}

// printing all the nodes
void printNodes()
{
    p = malloc(sizeof(struct d));
    if (h == NULL && t == NULL)
    {
        printf("ERROR: There is no value to print.");
    }
    else
    {
        p = h;
        while (p != NULL)
        {
            printf("%d ", p->i);
            p = p->next;
        }
        printf("\n");
    }
}

void main()
{
    insertEnd();
    printNodes();
    insertStart();
    printNodes();
    insertAfter();
    printNodes();
    insertBefore();
    printNodes();
}