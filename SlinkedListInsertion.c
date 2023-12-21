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
    scanf("%d", p->i);
    if (h == NULL)
    {
        h = p;
        p->next = NULL;
    }
    else
    {
        p->next = h;
        h = p;
    }
    // printing the nodes
     p=h;
    while(h!=NULL){
        printf("%d ",p->i);
        p=p->next;
    }
}
int main(){

    h = NULL;
    insertAtBeg();
   return 0;
}
