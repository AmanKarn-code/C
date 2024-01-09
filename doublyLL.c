#include <stdio.h>
#include <stdlib.h>

struct d{
    struct d *prev;
    int i;
    struct d *next;
};

struct d *h,*p,*p1;

void main(){
    int c=0,n;
    printf("Enter the size of the linked list :- ");
    scanf("%d",&n);
    h=NULL;
    while (c<n)
    {
        if(h==NULL){
            p=malloc(sizeof(struct d));
            printf("enter value %d :- ",c+1);
            scanf("%d",&p->i);
            p->prev=NULL;
            p->next=NULL;
            h=p;
        }
        else{
            p1=malloc(sizeof(struct d));
            printf("enter value %d :- ",c+1);
            scanf("%d",&p1->i);
            p->next=p1;
            p1->prev=p;
            p1->next=NULL;
            p=p1;
        }
        c+=1;
    }
    // printing the nodes
    p=h;
    while (p!=NULL)
    {
        printf("%d ",p->i);
        p=p->next;
    }
    
}