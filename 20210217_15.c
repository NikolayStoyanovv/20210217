#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  

  
  void display_ticket(int *ticket) {
    for (int i = 0; i < 6; ++i)
        printf("%2d ", ticket[i]);
    putchar('\n');
}
void generate_ticket(int *ticket) {
    int used[49 + 1] = {0}; // initialized to all 0
     
    for (int i = 0; i < 6; ++i) {
        int r;
        do
            r = rand() % 49 + 1;
        while (used[r]);
        used[r] = 1;
    }
     
    for (int i = 1, j = 0; i <= 49; ++i)
        if (used[i])
            ticket[j++] = i;
              display_ticket(ticket);
}
  

void display_ticket2(int *secticket) {
    for (int i = 0; i < 5; ++i)
        printf("%d ", secticket[i]);
    putchar('\n');
}
void generate_ticket2(int *secticket) {
    int used[35 + 1] = {0}; // initialized to all 0
     
    for (int i = 0; i < 5; i++) {
        int r;
        do
            r = rand() % 35 + 1;
        while (used[r]);
        used[r] = 1;
    }
     
    for (int i = 1, j = 0; i <= 35; ++i)
        if (used[i])
            secticket[j++] = i;
              display_ticket2(secticket);
}
void display_ticket3(int *thirdticket) {
    for (int i = 0; i < 6; ++i)
        printf("%d ", thirdticket[i]);
    putchar('\n');
}
void generate_ticket3(int *thirdticket) {
    int used[35 + 1] = {0}; // initialized to all 0
     
    for (int i = 0; i <6; i++) {
        int r;
        do
            r = rand() % 42 + 1;
        while (used[r]);
        used[r] = 1;
    }
     
    for (int i = 1, j = 0; i <= 42; ++i)
        if (used[i])
           thirdticket[j++] = i;
              display_ticket3(thirdticket);
}
  
int main() {
    int ch;
    srand(time(NULL));
  
    int ticket[6];
    int secticket[5];
    int thirdticket[6];
    
   
    
  void (*fun_ptr_arr[])(int *ticket) = {generate_ticket,generate_ticket2,generate_ticket3}; 
  printf("Enter Choice: 0 for 6/49, 1 for 5/35 and 2 "
            "for 6/42\n"); 
    scanf("%d", &ch); 
  
    if (ch > 2) return 0; 
  
   (*fun_ptr_arr[ch])(ticket);
    
    
    return 0;
}