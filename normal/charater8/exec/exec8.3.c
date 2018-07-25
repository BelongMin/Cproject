#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool weekend[7] = { true, [6] = true };
    int i = 0;
    for(i = 0; i < 7; i ++)
    {
        printf("weekend %d = %d\n", i, weekend[i]);
    }
    return 0;
}
