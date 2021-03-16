#include <stdio.h>  
#include<stdlib.h>
  
 int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
void myfunc(int arr[],int arr2[],int n1,int n2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while (i<n1 && j <n2)
    {
        
        if (arr[i] < arr2[j])
            arr3[k++] = arr[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
   
    while (i < n1)
        arr3[k++] = arr[i++];
 
    while (j < n2)
        arr3[k++] = arr2[j++];
}
void  main()  
{  
    int arrr[88];
    int n1 = sizeof(arrr) / sizeof(arrr[0]);
    int arrr2[88];
    
    int n2 = sizeof(arrr2) / sizeof(arrr2[0]);
    int arr3[n1+n2]; 
    int i,j;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input 88 elements in the array :\n");  
    for(i=0; i<88; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arrr[i]);  
    }  
     
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input 88 elements in the array2 :\n");  
    for(j=0; j<88; j++)  
    {  
	    printf("element - %d : ",j);
        scanf("%d", &arrr2[j]);  
    }  
    qsort(arrr, 2, sizeof(int), cmpfunc);
    qsort(arrr2, 2, sizeof(int), cmpfunc);
    myfunc(arrr,arrr2,n1,n2,arr3);
     for (int k=0; k < n1+n2; k++)
        printf(" %d ",arr3[k]);
}