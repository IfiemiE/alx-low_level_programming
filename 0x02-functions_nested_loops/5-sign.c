#include "main.h"
/**
 * print_sign - tells the sign of a number
 * @n: the number whose sign is checked
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	int r;

	if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else
	{
		r = 0;
		_putchar('0');
	}
	return (r);
}
