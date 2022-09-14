#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print towards 98 from any direction
 * @n: start number from which to print
 */
void print_to_98(int n)
{
	int dir;

	if (n > 98)
	{
		dir = -1;
	}
	else if (n < 98)
	{
		dir = 1;
	}
	else
	{
		dir = 0;
	}
	printf("%d", n);
	while (n != 98)
	{
		n = n + dir;
		printf(", %d", n);
	}
	printf("\n");
}
