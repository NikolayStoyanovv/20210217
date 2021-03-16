/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/
#include <stdio.h>
void oddNumbers(){
     int i, start, end;
    
     
    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All odd numbers from %d to %d are: \n", start, end);

    /* If start is not odd then make it odd */
    if(start%2==0)
    {
        start++;
    }

    /*
     * Initialize loop from start, increment it by 2.
     * For each repetition print the number.
     */
    for(i=start; i<=end; i+=2)
    {
        printf("%d\n", i);
       
    }
}
int main()
{
   
   printf("Press 0 to show you all odd numbers in the interval");
   void (*fun_ptr_arr[])(void) = {oddNumbers};
   
   (*fun_ptr_arr[0])();

    return 0;
}