#include <stdio.h>

void main(){
    int arr[5],s=0,g;
    int size=sizeof(arr);
    for(int i=0;i<5;i++){
        printf("Enter the %d no. ",i+1);
        scanf("%d",&arr[i]);
    }
    
    //printing the array u have entered
    printf("[");
    for (int i = 0; i <5; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]\n");
    
    // printing the sum of the array
    printf("the sum of the array u have entered\n");
    for(int i=0;i<5;i++){
        s=s+arr[i];
    }
        printf("{%d}\n",s);
    
    // printing the greatest no. in an array
    printf("printing thr greatest no. in the array\n");
        g=arr[1];
    for(int i=0;i<5;i++){
        if (arr[i]>g)
        {
            g=arr[i];
        }
        
    }
        printf("{%d}\n",g);
    
}