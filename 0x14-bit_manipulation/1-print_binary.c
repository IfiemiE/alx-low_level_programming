#include "main.h"
/**
  * print_binary - prints the binary representation of
  * a given (positive) number
  * @n: the given number
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int b;

	if (n == 0)
		_putchar('0');
	else
	{
		b = n & 1;
		n = n >> 1;
		if (n != 0)
			print_binary(n);
		_putchar(b + '0');
	}
}
