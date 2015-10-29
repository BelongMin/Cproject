#include <stdio.h>

int main()
{
	int number, n;
	printf("Enter a integer: ");
	scanf("%d", &number);
	n = number/10;
	while(n != 0)
	{
		printf("%d",number - (number/10)*10);
		number = number/10; 
		n = number/10;
	
	}
	printf("%d",number - (number/10)*10);
	printf("\n");

	return 0;
}
