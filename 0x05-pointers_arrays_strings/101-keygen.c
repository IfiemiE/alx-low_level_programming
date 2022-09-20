#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#inclde "main.h"

/**
* main - genrate password
* Return: 0 to terminate program
*/
int main(void)
{
	char *s;
	int k, len;
	char alpha;
	int i, j;

	len = 10;
	for (n = 0; n < len; n++)
	{
		srand(time(NULL));
		k = rand() % 36;
		if (k == 0)
		{
			k = 36;
		}
		alpha = 'a';
		j = 1;
		while (j != k)
		{
			if (k <= 26)
			{
				alpha = 'a';
				for (i = 1; i <= 26; i++)
				{
					if (i == k)
					{
						*(s + n) = alpha;
						break;
					}
					alpha++;
				}
			}
			else
			{
				k = k % 26;
				alpha = '1';
				for (i = 1; i <=9; i++)
				{
					if (i == k)
					{
						*(s + n) = alpha;
						break;
					}
					alpha++;
				}
			}
		}
	}
	printf("password: %s\n", s)
	return (0);
}
