#include <stdio.h>

int main()
{
	int i, times;
	float rate, loan, remainder;
	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter payment times:");
	scanf("%d", &times);
	rate /= (float)times*100;
	for(i = 0; i < times; i++)
	{
		
		remainder = (loan*(((float)times-i-1)/(float)times))*(1.0+rate);
		
		printf("loan remain:%.2f\n", remainder);
	}
	
	return 0;
}