#include <stdio.h>

int main(void)
{
	float numA, numB = 0;
	
	while(1)
	{
		printf("Enter a number:");
		scanf("%f", &numA);
		if(numA == 0 || numA < 0)
		{
			printf("The largest number entered was : %.2f\n", numB);
			break;
		}
		else if(numA > numB) numB = numA;
	}
	return 0;
}
