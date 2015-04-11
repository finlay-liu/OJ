#include <stdio.h>
#include <string.h>

void LeftMove(int array[])
{
	int i, tmp;
	tmp = array[15];
	for(i = 15;i >= 0; i--)
		array[i] = array[i - 1];
	array[0] = tmp;
}

int ArrayCmp(int array1[], int array2[])
{
	int i;
	for(i = 0;i < 16; i++)
		if(array1[i] != array2[i])
			return 0;
	return 1;
}

int main()
{
	int m, n, i, j, times, flag;
	int bit1[16], bit2[16];
	while(scanf("%d", &times) != EOF)
	{
		for(i = 0;i < times; i++)
		{
			memset(bit1, 0, sizeof(bit1));
			memset(bit2, 0, sizeof(bit2));
			scanf("%d%d", &m, &n);

			j = 0;
			while(m > 0)
			{
				bit1[j] = m % 2;
				m /= 2;
				j++;
			}

			j = 0;
			while(n > 0)
			{
				bit2[j] = n % 2;
				n /= 2;
				j++;
			}

			j = 0;
			flag = 0;
			while(j < 20)
			{
				LeftMove(bit1);
				if(ArrayCmp(bit1, bit2))
				{
					flag = 1;
					break;
				}
				j++;
			}
			if (flag)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}