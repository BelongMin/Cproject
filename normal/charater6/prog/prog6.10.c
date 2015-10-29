#include <stdio.h>

int main()
{
	int yy1, yy2, mm1, mm2, dd1, dd2;
	printf("Enter a date(yy/mm/dd):");
	scanf("%d/%d/%d", &yy1,&mm1, &dd1);
	while(1)
	{
		printf("Enter a date(yy/mm/dd):");
		scanf("%d/%d/%d", &yy2,&mm2, &dd2);
		if(yy2 == 0 && mm2 == 0 && dd2 == 0)break;
		if(yy2 > yy1)
		{
			
			continue; 
		}
		else
		{
			if(yy2 == yy1)
			{
				if(mm2 > mm1)
				{
					continue;
				}
				else
				{
					if(mm2 == mm1)
					{
						if(dd2 > dd1)
						{
							continue;
						}
					}
				}
			}
			yy1 = yy2;
			mm1 = mm2;
			dd1 = dd2;
			
		}
		
		
	}
	printf("%d/%d/%d is the earliest date\n", yy1, mm1, dd1);
	return 0;
}