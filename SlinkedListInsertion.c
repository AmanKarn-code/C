#include <stdio.h>
#include <stdlib.h>

struct s
{
    int i;
    struct s *next;
};
struct s *h, *p;
void insertAtBeg()
{
    p = (struct s *)malloc(sizeof(struct s));
    printf("enter the no: ");
    scanf("%d", &p->i);
    if (h->next == NULL)
    {
        h = p;
        p->next = NULL;
    }
    else
    {
        p->next = h;
        h = p;
    }
}
void insertAtEnd(){
    p = (struct s *)malloc(sizeof(struct s));
    printf("enter the no: ");
    scanf("%d", &p->i);
    while(h->next!=NULL){
        h=h->next;
    }
    h->next=p;
    p->next=NULL;

}
int main()
{

    h = NULL;
    insertAtBeg();
    return 0;
}
