#include "main.h"
/**
* print_diagonal - prints dashes to a given number
* @n: given number
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			if (i != n)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
