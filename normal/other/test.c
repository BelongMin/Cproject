#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	char a[10][10];
	int ch='A';
	int k;
	int x,y;
	int i,j;
	memset( a, 0, sizeof(a) );
	a[0][0] = 'A';
	ch++;
	srand( (unsigned)time( NULL ) );
	for( i=0; i<25; i++,ch++ )
	{
		k = rand()%4;
		for( j=0; j<4; j++, k = k+1>3 ? 0:k+1 )
		{
			switch(k)
			{
			case 0://上
				if( y-1 < 0 ) continue;
				if( a[x][y-1] != '\0' ) continue;
				y--;
				break;
			case 1://右
				if( x+1 >= 10 ) continue;
				if( a[x+1][y] != '\0' ) continue;
				x++;
				break;
			case 2://下
				if( y+1 >= 10 ) continue;
				if( a[x][y+1] != '\0' ) continue;
				y++;
				break;
			case 3://左
				if( x-1 < 0 ) continue;
				if( a[x-1][y] != '\0' ) continue;
				x--;
				break;
			default:
				return;
			}
			a[x][y] = ch;
			break;
		}

		if( j >= 4 ) return;
	}
}

