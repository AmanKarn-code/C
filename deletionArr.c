#include <stdio.h>

void deleteEle(int arr[], int index,int usedSize){
    for (int i = index; i < usedSize; i++)
    {
        arr[i]=arr[i+1];
    }
}
void deleteElement(int arr[], int index,int usedSize){
    int j=arr[index];
    for (int i = index; i < usedSize; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[usedSize-1]=j;
}

void displayArr(int arr[], int usedSize)
{
    printf("[");
    for (int i = 0; i < usedSize; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
}
int main(){
    int arr[20]={1,5,8,9,47,97,61,72};
    int element=20,index=5,usedSize=8;
    displayArr(arr,usedSize);
    deleteElement(arr,2,8);
    // usedSize-=1;
    displayArr(arr,usedSize);
}