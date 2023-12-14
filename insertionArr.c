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

// // shifting all thye elements in the last
// void insertEle(int arr[], int usedSize, int capacity, int index, int ele)
// {
//     for (int i = usedSize - 1; i >= index; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[index] = ele;
// }

void insertElement(int arr[], int usedSize, int capacity, int index, int ele)
{
    int a;
    usedSize+=1;
    arr[usedSize] = arr[index];
    arr[index] = ele;
    printf("%d", arr[usedSize]);
    for(int i=usedSize;i>index;i--){
        a=arr[index];
        arr[index]=ele;
        arr[usedSize+1]=a;
    }
}
int main()
{
    int capacity, usedSize, index = 3, ele = 5;
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
    // insertEle(arr,usedSize,capacity,index,ele);
    // usedSize +=1;
    // displayArr(arr, usedSize);
    insertElement(arr, usedSize, capacity, index, ele);
    usedSize += 1;
    displayArr(arr, usedSize);
}