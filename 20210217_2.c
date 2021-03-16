/*Задача 2. Добавете към горния код функции за умножение
и деление.*/
#include<stdio.h>
#include<stdlib.h>
int fnPlus(int nA,int nB){return (nA+nB);}
int fnMinus(int nA,int nB){return (nA-nB);}
int fnMultiply(int nA,int nB){return (nA*nB);}
int fnDevide(int nA,int nB){
    if(nA>nB){
       return (nA/nB); 
    }else{
        return (nB/nA);
    }
    }
int main(int argc,char*argv[]){
    int(*pfCalc)(int,int)=NULL;
    if(argc<3){
        printf("\nUsage:%s +/-argv1 argv2",argv[0]);
    }else if(argv[1][0]=='-'){
        pfCalc=fnMinus;
    }else if(argv[1][0]=='+'){
        pfCalc=fnPlus;
    }else if(argv[1][0]=='*'){
        pfCalc=fnMultiply;
    }else if(argv[1][0]=='/'){
        pfCalc=fnDevide;
    }
    (NULL==pfCalc)? 0:printf("Result:%d\n",(*pfCalc)(atoi(argv[2]), atoi(argv[3])));
    return 0;
}