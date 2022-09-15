#include "main.h"
/**
* print_square - draws a square of a given size
* @size: size of square
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
