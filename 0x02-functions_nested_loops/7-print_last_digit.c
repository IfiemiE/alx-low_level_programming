#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number to be considered
 * Return: the last digit of the number n
 */
int print_last_digit(int n)
{
	long int r1;
	int r;

	if (n < 0)
	{
		r1 = (-n) % 10;
	}
	else
	{
		r1 = n % 10;
	}
	r = r1;
	_putchar(r + '0');
	return (r);
}
