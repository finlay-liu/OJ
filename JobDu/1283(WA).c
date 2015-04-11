#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char line[10000];
	int times[26], i, len, k;
	//freopen("sample.txt", "r", stdin);
	while (scanf("%s", &line) != EOF )
	{
		for(i = 0;i < 26;i++)
			times[i] = 0;

		len = strlen(line);
		for(i = 0;i < len;i++)
			times[line[i] - 'A']++;

		k = -1;
		for(i = 0;i < len;i++) {
			if(times[i] == 1) {
				k = i;
				break;
			}
		}

		if(k == -1)
			printf("-1\n");
		else {
			for(i = 0;i < len;i++) {
				if(('A' + k) == line[i]) {
					printf("%d\n", i);
					break;
				}
			}
		}
	}
	//fclose(stdin);
	return 0;
}