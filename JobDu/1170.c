// http://ac.jobdu.com/problem.php?pid=1170
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int x;
	int y;
}Num;
Num nums[1000];

int cmp(const void *a, const void *b)
{
	Num *A = (Num *)a;
	Num *B = (Num *)b;
	if(A->x != B->x)
		return A->x > B->x ? 1 : -1;
	else
		return A->y > B->y ? 1 : -1;
}
int main()
{
	int n ,i;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%d%d", &nums[i].x, &nums[i].y);
		qsort(nums, n, sizeof(Num), cmp);
		printf("%d %d\n", nums[0].x, nums[0].y);
	}

	return 0;
}