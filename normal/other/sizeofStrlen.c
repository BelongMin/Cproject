#include <stdio.h>
#include <string.h>

int main()
{

	char *s = "1234567890";
	char buf[10];
	bzero(buf, sizeof(buf));
	printf("sizeof : %d\nstrlen : %d\n", sizeof(s), strlen(s));
	printf("sizeof : %d\nstrlen : %d\n", sizeof(buf), strlen(buf));
	return 0;
}
