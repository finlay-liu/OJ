#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	int x;
	int y;
}Point;
Point ps[10000];

int main()
{
	int N = 0, i, minx, miny, maxx, maxy;
	while(scanf("%d%d", &ps[N].x, &ps[N].y) != EOF)
	{
		// End of App
		if(N == 0 && ps[N].x == 0 && ps[N].y == 0)
			return 0;
		else if(ps[N].x == 0 && ps[N].y == 0)
		{
			maxx = minx = ps[0].x;
			maxy = miny = ps[0].y;
			for(i = 0;i < N;i++)
			{
				if(minx >= ps[i].x)
					minx = ps[i].x;
				if(maxx <= ps[i].x)
					maxx = ps[i].x;
				if(miny >= ps[i].y)
					miny = ps[i].y;
				if(maxy <= ps[i].y)
					maxy = ps[i].y;
			}
			printf("%d %d %d %d\n", minx, miny, maxx, maxy);
			N = 0;
		}
		else
			N++;
	}
	return 0;
}