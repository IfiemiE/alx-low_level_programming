#include "main.h"
/**
 * jack_bauer - prints every time count
 *
 */
void jack_bauer(void)
{
	int m1;
	int m2;
	int s1;
	int s2;
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		m1 = i / 10;
		m2 = i % 10;
		for (j = 0; j <= 59; j++)
		{
			s1 = j / 10;
			s2 = j % 10;
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar(':');
			_putchar(s1 + '0');
			_putchar(s2 + '0');
			_putchar('\n');
		}
	}
}
