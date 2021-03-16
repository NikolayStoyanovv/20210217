#include<stdio.h>
#include<stdlib.h>
int fnPlus(int nA,int nB){return (nA+nB);}
int fnMinus(int nA,int nB){return (nA-nB);}
int main(int argc,char*argv[]){
    int(*pfCalc)(int,int)=NULL;
    if(argc<3){
        printf("\nUsage:%s +/-argv1 argv2",argv[0]);
    }else if(argv[1][0]=='-'){
        pfCalc=fnMinus;
    }else if(argv[1][0]=='+'){
        pfCalc=fnPlus;
    }
    (NULL==pfCalc)? 0:printf("Result:%d\n",(*pfCalc)(atoi(argv[2]), atoi(argv[3])));
    return 0;
}