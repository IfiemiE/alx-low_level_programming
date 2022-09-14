#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int t = i * j;
			int n1 = t / 10;
			int n2 = t % 10;

			if (n1 == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(n1 + '0');
			}
			_putchar(n2 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
