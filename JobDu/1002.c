// http://ac.jobdu.com/problem.php?pid=1002
#include <stdio.h>

int abs(int n)
{
	if(n < 0)
		return -n;
	else
		return n;
}

int main()
{
	int P, T, G1, G2, G3, GJ;
	float output = 0;
	
	while(scanf("%d%d%d%d%d%d", &P, &T, &G1, &G2, &G3, &GJ) != -1)
	{
		if(abs(G1 - G2) <= T)
			output = (G1 + G2) / 2.0;
		else
		{
			if(abs(G3 - G1) <= T && abs(G3 - G2) <= T) // both
			{
				if(G1 >= G2 && G1 >= G3)
					output = G1;
				else if(G2 >= G1 && G2 >= G3)
					output = G2;
				else if(G3 >= G1 && G3 >= G2)
					output = G3;
			}	
			else if(abs(G3 - G1) > T && abs(G3 - G2) > T) // neither
				output = GJ / 1.0;
			else // not both
			{
				if(abs(G3 - G2) <= abs(G3 - G1))
					output = (G3 + G2) / 2.0;
				else
					output = (G3 + G1) / 2.0;
			}	
		}
		printf("%0.1f\n",output);
	}
	return 0;
}