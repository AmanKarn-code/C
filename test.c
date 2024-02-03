#include <stdio.h>

void main(){
    int arr[]={7,8,9,6,5,1};
int j=1,i=0,n=6;
    while (j<n){
       
            if(arr[i]>arr[j]){
                printf("first sort the array.\n");
                break;
            }
        j++;i++;
    }
}