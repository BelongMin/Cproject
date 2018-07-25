#include <stdio.h>

int main()
{
    int temperature_readings[30][24];
    int averageMonth, averageDay;
    for(int i = 0; i < 30; i++)
    {
        for(int j = 0; j < 24; j++)
        {
            averageDay += temperature_readings[i][j];
        }
        averageMonth += (averageDay / 24);
        averageDay = 0;
    }
    printf("average temperature:%d", averageMonth / 30);
    return 0;
}
