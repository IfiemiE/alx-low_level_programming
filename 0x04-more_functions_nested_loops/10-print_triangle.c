#include "main.h"
/**
* print_triangle - prints a triangle of a given size
* @size: given size
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= (size - i + 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			if (i < size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
