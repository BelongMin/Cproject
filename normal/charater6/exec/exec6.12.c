#include <stdio.h>
int main()
{
	int d,n;
	
	printf("Enter a integer:");
	scanf("%d", &n);
	for(d = 2; d < n; d++)
	{
		if(n % d == 0)break;
	}

	if(d * d <= n)
		{
			printf("%d is divisible by %d\n", n, d);
		}
		else
		{
			printf("%d is a prime\n", n);
		}
	return 0;
}
