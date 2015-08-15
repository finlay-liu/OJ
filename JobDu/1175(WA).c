#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	char a[110], b[110];
	int alen, blen, i, j, flag;
	freopen("data.in", "r", stdin);
	while(scanf("%s %s", &a, &b) != EOF)
	{
		alen = strlen(a);
		blen = strlen(b);
		flag = 0;
		if(alen < blen)
			printf("NO\n");
		else if(blen == 1)
		{
			for(i = 0; i < alen; i++)
			{
				if(a[i] > b[0])
				{
					printf("YES\n");
					flag = 1;
					break;
				}
			}
			if(!flag) printf("NO\n");
		}
		else if(blen == 2)
		{
			for(i = 0; i < alen - 1; i++)
			{
				if(a[i] == a[i + 1] && a[i] > b[0] && b[0] == b[1])
				{
					printf("YES\n");
					flag = 1;
					break;
				}
			}
			if(!flag) printf("NO\n");
		}
		else if(blen == 3)
		{
			for(i = 0; i < alen - 2; i++)
			{
				if(a[i] == a[i + 1] && a[i] == a[i + 2] && a[i] > b[0]
					&& b[0] == b[1] && b[1] == b[2])
				{
					printf("YES\n");
					flag = 1;
					break;
				}
			}
			if(!flag) printf("NO\n");
		}
		else if(blen == 4)
		{
			for(i = 0; i < alen - 3; i++)
			{
				if(a[i] == a[i + 1] && a[i] == a[i + 2] && 
					a[i] == a[i + 3] && a[i] > b[0] &&
					b[0] == b[1] && b[1] == b[2] && b[2] == b[3])
				{
					printf("YES\n");
					flag = 1;
					break;
				}
			}
			if(!flag) printf("NO\n");
		}
		else if(blen == 5)
		{
			int tmp[5];
			if(!(b[0] + 1== b[1] && b[1] + 1 == b[2] && b[2] + 1 == b[3] && b[3] + 1 == b[4]))
				printf("NO\n");
			else
			{
				for(i = 0; i < alen - 4; i++)
				{
					if((a[i] > b[flag] && flag == 0)
						|| (a[i] > b[flag] && a[i] > tmp[flag - 1]) )
					{
						tmp[flag] = a[i];
						flag++;
					}

				}
				if(flag >= 4)
					printf("YES\n");
				else printf("NO\n");
			}
		}
	}
	return 0;
}