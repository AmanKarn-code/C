#include<stdio.h>
#include <math.h>

void main(){
    int n,a,b,c=0,s=0;
    printf("enter the no.:- ");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        n/=10;
        c++;
    }
    n=a;
    while(n!=0){
        b=n%10;
        s+=pow(b,c);
        n/=10;
    }
    if(s==a){
        printf("yes");
    }
    else{
        printf("no");
    }
}