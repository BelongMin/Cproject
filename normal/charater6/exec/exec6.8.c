#include <stdio.h>

int main()
{
	int i;
	for(i = 10; i >= 1; i /= 2)
	{
		printf("%d ", i++);
		if(i == 2)break;
	}
	return 0;
}
