#include <stdio.h>
#include <stdlib.h>

struct abstactArray
{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArr(struct abstactArray *a,int tSize , int uSize){
    (*a).totalSize=tSize;
    (*a).usedSize=uSize;
    (*a).ptr=(int *)malloc(tSize*sizeof(int)); 
}

void printArr(struct abstactArray *a){
    for (int i = 0; i < (*a).usedSize; i++)
    {
        printf("[ %d ]",(a->ptr)[i]);
    }
    
}
void main(){
    struct abstactArray marks;
    createArr(&marks,10,2);
    printArr(&marks);
}
