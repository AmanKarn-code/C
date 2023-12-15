#include <stdio.h>

void deleteEle(int arr[], int index,int usedSize){
    for (int i = index; i < usedSize; i++)
    {
        // arr[index]=n;
        arr[i]=arr[i+1];
    }
}
// void deleteEle(int arr[], int index,int usedSize){
//     for (int i = index; i < usedSize; i++)
//     {
//         // arr[index]=n;
//         arr[i]=arr[i+1];
//     }
// }

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
    deleteEle(arr,2,8);
    usedSize-=1;
    displayArr(arr,usedSize);
}