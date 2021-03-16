 
#include<stdio.h>
#include"20210217_23.h"

int main() 
{
    int s=0;
    int arr[100]={0};
     printf("How many numbers do you want to enter\n");
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        scanf("%d", &arr[i]);
    }

    
    
    bubbleSort(arr, s); 
    printf("Sorted array: \n"); 
    printArray(arr,s); 
    return 0; 
} 