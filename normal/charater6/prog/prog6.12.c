#include <stdio.h>

int main()
{
	float e = 0.0, f = 1.0f, num;
	int i = 1, j, n;
	// printf("Enter a n:");
	// scanf("%d", &n);
	printf("Enter a small float num:");
	scanf("%f", &num);
	while(1)
	{
		
		for(j = i, f = 1.0f; j > 0; j--)
		{
			f = f * j;
		}
		f = 1.0f/f;
		if(f < num)
		{
			printf("%f\n", f);
			break;
		}
		e += f;
		i++;
	}
	printf("e = %f\n", e+1.0f);
	return 0;
}