#include <stdio.h>

int main()
{
	float e = 0.0, f = 1.0f;
	int i, j, n;
	printf("Enter a n:");
	scanf("%d", &n);
	for(i = n; i > 0; i--)
	{
		for(j = i, f = 1.0f; j > 0; j--)
		{
			f = f * j;
		}
		//printf("%f\n", f);
		e += 1.0f/f;
		
	}
	printf("e = %f\n", e+1.0f);
	return 0;
}