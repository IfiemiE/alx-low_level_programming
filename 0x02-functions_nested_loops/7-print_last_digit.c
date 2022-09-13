#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number to be considered
 * Return: the last digit of the number n
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
	}
	else
	{
		r = -n % 10;
	}
	_putchar(r + '0');
	return (r);
}
