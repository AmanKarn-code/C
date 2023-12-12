#include <stdio.h>
void isPalaindrome(){
    int n,a,s=0,r;
    printf("enter the number you want to check for palaindrome :- ");
    scanf("%d",&n);
    int b=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if (s==b)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}

void isPalaindromeFor(){
    int n,a,s=0,r;
    printf("enter the number you want to check for palaindrome :- ");
    scanf("%d",&n);
    int i=n;
    for(n;n>0;n/10){
        r=n%10;
        s=r+(s*10);
    }
    if(s==i){
       printf("yes");
    }
    else{
        printf("no");
    }
}
void main(){
    // isPalaindrome();
    isPalaindromeFor();
}