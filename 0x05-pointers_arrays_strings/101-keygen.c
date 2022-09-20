#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - genrate password
* Return: 0 to terminate program
*/
int main(void)
{
	int p[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		sum = sum + (p[i] + '0');
		_putchar(p[i] + '0');
		if (((2772 - sum) - '0') < 78)
		{
			n = 2772 - sum - '0';
			sum = sum + n;
			_putchar(n + '0');
			break;
		}
	}
	_putchar('\n');
	return (0);
}
