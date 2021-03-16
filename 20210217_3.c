/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/

#include <stdio.h> 
void add(int* a, int* b) 
{ 
    printf("Addition is %d\n", *a+*b); 
} 
void subtract(int* a, int* b) 
{ 
    printf("Subtraction is %d\n", *a-*b); 
} 
void multiply(int* a, int* b) 
{ 
    printf("Multiplication is %d\n", *a**b); 
} 
  
int main() 
{ 
    // fun_ptr_arr is an array of function pointers 
    void (*fun_ptr_arr[])(int*, int*) = {add, subtract, multiply}; 
    int ch;
    int x=15;
    int y=10;
    int*a=&x;
    int*b=&y; 
  
    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply\n"); 
    scanf("%d", &ch); 
  
    if (ch > 2) return 0; 
  
    (*fun_ptr_arr[ch])(a, b); 
  
    return 0; 
} 