/*Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/
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
            
              		array2[i][j]=array[i][j];
            		sum=sum+*arrp;
        			printf("%d ", *arrp);
        
    	}

    	printf("\n");
    }   
printf("\nThe sum of the elements is:%d\n",sum);
  
 
return 0;
}