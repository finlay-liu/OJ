#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int t, a, b, c, d, i, j, len1, len2, index;
	int *array1, *array2, *array3;
	while(scanf("%d", &t) != EOF)
	{
		for(i = 0;i < t;i++)
		{
			scanf("%d%d", &len1, &len2);
			array1 = (int *)malloc(len1 * sizeof(int));
			array2 = (int *)malloc(len2 * sizeof(int));
			for(j = 0;j < len1;j++)
				scanf("%d", &array1[j]);
			for(j = 0;j < len2;j++)
				scanf("%d", &array2[j]);
			scanf("%d%d%d%d", &a, &b, &c, &d);
			index = 0;
			array3 = (int *)malloc((b + d) * sizeof(int));
			if(a != b)
				for(j = a - 1;j <= b - 1;j++,index++)
					array3[index] = array1[j];
			else
			{
				array3[index] = array1[a - 1];
				index++;
			}
			if(c != d)
				for(j = c - 1;j <= d - 1;j++,index++)
					array3[index] = array2[j];
			else
			{
				array3[index] = array2[c - 1];
				index ++;
			}
			if(index % 2 == 0)
				printf("%d\n", array3[index / 2 - 1]);
			else
				printf("%d\n", array3[(index + 1)/ 2 - 1]);
		}
	}
	return 0;
}