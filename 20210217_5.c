
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
   	 unsigned int sum=0,max;
unsigned int  m, n,a,b,num;
    	unsigned int array[m][n];
    	unsigned int array2[m][n];
        int *arrp = &array[m][n];

        	printf("Enter a value for max random number in a matrix: ");
      	 scanf("%d", &a);
 
    	printf("Enter a value for min random number in a matrix: ");
 	scanf("%d", &b);
 
    	printf("Enter the row dimension of the matrix: ");
   	scanf("%d", &m);
 
   	 printf("Enter the column dimension of the matrix: ");
    	scanf("%d", &n);
 
    for(int i = 0; i < m;i++) {
    	for(int j = 0; j < n;j++) {
          
               *(arrp+i) = (rand() % 
           (a - b + 1)) + b; 
            //array[i][j]=*(arrp+i);
              array2[i][j]=array[i][j];
            sum=sum+*arrp;
        printf("%d ", *arrp);
        //printf("%d",sum);
    	}
    	printf("\n");
              }   
              printf("\nThe sum of the elements is:%d\n",sum);
  
 
return 0;
}