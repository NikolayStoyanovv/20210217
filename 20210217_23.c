 
/*Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.*/
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