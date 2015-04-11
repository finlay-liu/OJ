#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isEmpty(int input[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (input[i] != 0)
			return 0;
	}
	return 1;
}

void Dev(int input[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (input[i] % 2 == 0)
			input[i] /= 2;
		else if (input[i] % 2 == 1)
		{
			input[i] /= 2;
			input[i + 1] += 10;
		}
	}
}

int main()
{
	int num[35], i, j, len;
	char input[35], output[100];
	while (scanf("%s", &input) != EOF)
	{
		for (i = 0; i < 35; i++)
			num[i] = 0;

		len = strlen(input);
		for (i = 0; i < len; i++)
			num[34 - i] = input[len - i - 1] - '0';

		j = 0;
		while (!isEmpty(num, 35))
		{
			if (num[34] % 2 == 0)
				output[j] = '0';
			else
			{
				output[j] = '1';
				num[34]--;
			}
			Dev(num, 35);
			j++;
		}

		for (i = j - 1; i >= 0; i--)
			printf("%c", output[i]);
		if (j == 0)
			printf("0");
		printf("\n");
	}
}