#include <stdio.h>
// #include <aloc.h>
#include <stdlib.h>

void main()
{
    int *p, n, i, s = 1, r, a = 0;
    // p=&n;
    // p=(int*)malloc(sizeof(int));
    // printf("enter the no. :- ");
    // scanf("%d",p);
    // printf("%d",*p);



    // reverse of a no.
    // p = (int *)malloc(sizeof(int));
    // printf("enter the no ");
    // scanf("%d", p);
    // printf("the no u have entered is :- %d \n", *p);
    // for (i = *p; i != 0; i /= 10)
    // {
    //     r = i % 10;
    //     a = (a * 10) + r;
    // }
    // for(*p;*p>0;*p/=10){
    //     r=*p%10;
    //     a=(a*10)+r;
    // }
    // printf("%d", a);

    // factorial of a no.
    // p = (int *)malloc(sizeof(int));
    // printf("enter the no. :- ");
    // scanf("%d", p);
    // for(i=1;i<=*p;i++){
    //     s=s*i;
    // }
    // printf("%d",s);

    // sum of a digit
    // p=(int*)malloc(sizeof(int));
    // printf("enter the no. :- ");
    // scanf("%d", p);
    // for(i=*p;i!=0;i/=10){
    //     r=i%10;
    //     a=a+r;
    // }
    // printf("%d",a);

    // printing an array
    int *no=(int*)malloc(sizeof(int)),j=0;
    printf("enter the no of elments in the array :- ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        printf("%d",(*p+i));
    }
    printf("\n");
    printf("enter the no ");
    scanf("%d",no);
    for(i=0;i<n;i++){
        if ((*p+i)==*no)
        {
           j++;
        }
    }
    if (j!=0)
    {
         printf("yes the no is present at %d",i);
    }
    else{
        printf("the no is not present");
    }
    
    
}