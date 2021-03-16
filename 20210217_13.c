/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARR_SIZE 1000
void reverse(char *arr,int size){
    char c,*p=NULL;
    int i; 
    i=0;
    p=arr;

    while((c=getchar())!='\n'){
        arr[i]=c;
        i++;
        p++;
    }
    while(i>0){
        --p;
        printf("%c",*p);
        i--;
    }
    printf("\n");
}
int main(){
    printf("Please enter some text to be converted!!!\n");
    char arr[ARR_SIZE];
    reverse(arr,ARR_SIZE);
   
        
    return 0;
}