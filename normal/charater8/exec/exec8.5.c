#include <stdio.h>

int main()
{
    long fib_number[40] = {};
    printf("Please enter two number:");
    scanf("%ld %ld", &fib_number[0], &fib_number[1]);
    for(int i = 2; i < 40; i++)
    {
        fib_number[i] = fib_number[i-1] + fib_number[i-2];
    }
    for(int i = 0; i < 40; i++)
    {
        printf("%ld\n", fib_number[i]);
    }
    return 0;
}
