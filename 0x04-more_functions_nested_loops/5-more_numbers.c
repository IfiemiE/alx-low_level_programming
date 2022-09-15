#include "main.h"
/**
* more_numbers - print 0 - 14, 10 times
*/
void more_numbers(void)
{
	int i, j;
	int a, b;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				a = j / 10;
				_putchar(a + '0');
			}
			b = j % 10;
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
