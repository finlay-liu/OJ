// http://ac.jobdu.com/problem.php?pid=1001

#include <stdio.h>

int main()
{
	int M, N, i, j, tmp, out;
	int A[10][10];
	
	//freopen("1001.in","r",stdin);
	while(1)
	{
		scanf("%d", &M);
		if(M == 0)
			return 0;
		scanf("%d", &N);
		
		// Input A and B
		for(i = 0;i < M; i++)
			for(j = 0;j < N; j++)
				scanf("%d",&A[i][j]);
		for(i = 0;i < M; i++)
		{
			for(j = 0;j < N; j++)
			{
				scanf("%d",&tmp);
				A[i][j] += tmp;
			}
		}

		out = 0;
		for(i = 0;i < M; i++)
		{
			tmp = 0;
			for(j = 0;j < N; j++)
			{
				tmp += A[i][j];
			}
			if(tmp == 0)
				out++;
		}
		for(i = 0;i < N; i++)
		{
			tmp = 0;
			for(j = 0;j < M; j++)
			{
				tmp += A[j][i];
			}
			if(tmp == 0)
				out++;
		}
		printf("%d\n",out);
	}
	//freclose(stdin);
	return 0;
}