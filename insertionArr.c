#include <stdio.h>
void createArr(int arr[], int usedSize)
{
    int ele;
    for (int i = 0; i < usedSize; i++)
    {
        printf("enter the %d term ", i + 1);
        scanf("%d", &ele);
        arr[i] = ele;
    }
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
void insertEle(int arr[],int usedSize,int capacity,int index,int ele){
    for(int i=usedSize-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=ele;
}
int main()
{
    int capacity, usedSize,index=6,ele=5;
    printf("enter the capacity of the array : ");
    scanf("%d", &capacity);
    printf("enter the no of terms u want to add in the arr : ");
    scanf("%d", &usedSize);
    int arr[capacity];
    if (usedSize > capacity)
    {
        printf("ERROR: the size ofthe usedSize can not be greater than capacity of the array.");
        return -1;
    }

    createArr(arr, usedSize);
    displayArr(arr, usedSize);
    insertEle(arr,usedSize,capacity,index,ele);
    usedSize +=1;
    displayArr(arr, usedSize);
}