/*Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/
#include<stdio.h>
int i,j,k;
void addelem(){
    int arr[2][3][3];              //array declaration
	printf("enter the values in the array: \n");
	for(i=1;i<=2;i++)              //represents block
	{
		for(j=1;j<=3;j++)          //represents rows
		{
			for(k=1;k<=3;k++)      //represents columns
			{
				printf("the value at arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("printing the values in array: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
}                  //variables for nested for loops
int main()
{
    //addelem();
    void (*fun_ptr_arr[])() = {addelem}; 
    (*fun_ptr_arr[0])(); 
    
	return 0;
}