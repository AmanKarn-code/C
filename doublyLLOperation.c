#include <stdio.h>
#include <stdlib.h>

struct d
{
    struct d *prev;
    int i;
    struct d *next;
};
struct d *h, *t, *p, *p1;

// creating the ll of n size
void createNode()
{
    h = NULL;
    t = NULL;
    int c = 0, n;
    printf("Enter the no. of nodes you want to create :- ");
    scanf("%d", &n);
    while (c < n)
    {
        if (h == NULL)
        {
            p = malloc(sizeof(struct d));
            printf("enter value %d :- ", c + 1);
            scanf("%d", &p->i);
            p->prev = NULL;
            p->next = NULL;
            h = p;
            t = p;
        }
        else
        {
            p1 = malloc(sizeof(struct d));
            printf("enter value %d :- ", c + 1);
            scanf("%d", &p1->i);
            p->next = p1;
            p1->prev = p;
            p1->next = NULL;
            p = p1;
            t = p;
        }
        c++;
    }
}

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
        p1->prev = t;
        t->next = p1;
        p1->next = NULL;
        t = p1;
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
    while (p1 != NULL)
    {
        if (p1->i == n)
        {
            break;
        }
        p1 = p1->next;
    }
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
            q = p1->next;
            p->prev = p1;
            p1->next = p;
            p->next = q;
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
            h->prev = p;
            p->prev = NULL;
            h = p;
            printf("Since %d is the first term hence %d becomes the first term.\n", n, p->i);
        }
        else
        {
            p->next = p1;
            p->prev = q;
            q->next = p;
            p1->prev = p;
        }
    }
}

// delete from start
void deletestart()
{
    p = malloc(sizeof(struct d));
    p1 = malloc(sizeof(struct d));
    if (h == NULL && t == NULL)
    {
        printf("There is no node to delete. \n");
    }
    else
    {
        p = h;
        if (p->next == NULL)
        {
            int a = p->i;
            free(p);
            printf("%d was the single node which is deleted.\n", a);
            h = t = NULL;
        }
        else
        {
            int a = p->i;
            h = h->next;
            free(p);
            printf("%d has been deleted from the starting.\n", a);
            h->prev = NULL;
        }
    }
}

// dlelte from end
void deleteEnd()
{
    p = malloc(sizeof(struct d));
    p1 = malloc(sizeof(struct d));
    if (h == NULL && t == NULL)
    {
        printf("There is no node to delete. \n");
    }
    else
    {
        p = t;
        if (p->prev == NULL)
        {
            int a = p->i;
            free(p);
            printf("%d was the single node which is deleted.\n", a);
            t = h = NULL;
        }
        else
        {
            int a = p->i;
            t = t->prev;
            free(p);
            printf("%d has been deleted from the End.\n", a);
            t->next = NULL;
        }
    }
}
// deleteinf before
void deletebefore(){
     p1 = malloc(sizeof(struct d));
    if(h==NULL&&t==NULL){
        printf("First create the node. \n");
    }
    else{
        int n;
        printf("enter the no befor which u want to delete :- ");
        scanf("%d",&n);
        if(h->i==n){
                printf("Cannot delete before the only node in the list.\n");
            }
        else if (h->next != NULL && (h->next)->i == n) {
            p1 = h->next;
            free(h);
            h = p1;
            h->prev = NULL;
            free(p1);
        } 
        
        
        else{
            p1=h;
            while(p1->next!=t){
                if((p1->next)->i==n){
                    break;
                }
                p1=p1->next;
            }
            if(p1==NULL){
                printf("no node found.\n");
            }
            else{
                  struct d *q = p1->next;
                p1->next=q->next;
                (q->next)->prev=p1;
                free(q);
            }
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
    int c;
    do
    {
        printf("Select the operation u want to perform.\n");
        printf("-------------------------------------------------------------------------------------------------------------\n");
        printf("||    1.Create the node \t        2.Insert a node at begining\t   3.Insert the node at end.       ||\n");
        printf("||    4.Insert after the value \t        5.Insert before the value\t   6.Delete the node from start.   ||\n");
        printf("||    7.Delete from end \t        8.Delete before the value\t   9.Delete after the value.       ||\n");
        printf("||   10.View the LinkedList                                                                                ||\n ");
        printf("------------------------------------------------------------------------------------------------------------\n");

        scanf("%d", &c);
        switch (c)
        {
        case 1:
            createNode();
            break;

        case 2:
            insertStart();
            break;

        case 3:
            insertEnd();
            break;
        case 4:
            insertAfter();
            break;

        case 5:
            insertBefore();
            break;
        case 6:
            deletestart();
            break;
        case 7:
            deleteEnd();
            break;
        case 8:
            deletebefore();
            break;
        case 10:
            printNodes();
            break;

        case 0:
            printf("The program is being terminated.");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }
    } while (c != 0);
}