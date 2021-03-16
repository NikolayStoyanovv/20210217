
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