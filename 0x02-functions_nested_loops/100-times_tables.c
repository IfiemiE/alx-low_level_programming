#include "main.h"
#include <stdio.h>
/**
 * print_times_table - to generate times table upto to a given size
 * @n: the given size of the time_table
 *
 */
void print_times_table(int n)
{
	int i;
	int j;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				long int t = i * j;

				if (j == 0)
				{
					printf("%ld", t);
				}
				else
				{
					if (t <= 9)
					{
						printf(",   %ld", t);
					}
					else if (t <= 99)
					{
						printf(",  %ld", t);
					}
					else
					{
						printf(", %ld", t);
					}
				}
			}
			printf("\n");
		}
	}
}
