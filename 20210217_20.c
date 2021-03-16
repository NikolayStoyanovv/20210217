/*Напишете програма, която да създаде стек (LIFO) от 16 елемента,
който има следното API
int pop()
void push()
int top()
int isFull()
Вариация: Пробвайте с опашка(FIFO), но вече вие предложете API
и го изпробвайте в main().*/
#include <stdio.h>

int MAXSIZE = 16;       
int stack[16];     
int top = -1;            


   int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}



int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
   for(int i=0;i<16;i++){
       push(i);
   }
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
  
   printf("Stack full: %s\n" , isfull()?"true":"false");
   
   
   return 0;
}