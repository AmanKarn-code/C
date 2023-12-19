#include <stdio.h>
#include <stdlib.h>

struct l {
    int i;
    struct l *next;
};

void main(){
struct l *h ,*p ,*p1;
    int c=0;
    h=NULL;
    while (c<5)
    {
        if(h==NULL){
            p=(struct l *)malloc(sizeof(struct l));
            printf("enter the no :- ");
            scanf("%d",&p->i);
            h=p;
            p->next=NULL;
        }
        else{
            p1=(struct l *)malloc(sizeof(struct l));
            printf("enter the no :- ");
            scanf("%d",&p1->i);
            p1 ->next=NULL;
            p->next= p1;
        }
        c+=1;
    }
    p=h;
    while (p!=NULL)
    {
        printf("%d ",p->i);
        p=p->next;
    }
    
    
}