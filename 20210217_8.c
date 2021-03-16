
#include <stdio.h>

int main()
{       int fib[24];
        int i;

        fib[0] = 0;
        fib[1] = 1;

        for(i = 2; i < 24; i++)
                fib[i] = fib[i-1] + fib[i-2];

        for (i = 0; i < 24; i++)
                printf("Position:%3d   Fibonaci number:%6d\n", i, fib[i]);
}