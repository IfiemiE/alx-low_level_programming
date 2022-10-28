#include "main.h"
#include <stdio.h>
/**
  * powr - computes integral power of an integer
  * @n: power/exponent
  * @x: given number/base
  * Return: the computed power
  */
unsigned long int powr(unsigned long int x, unsigned int n)
{
	unsigned int p;
	unsigned long int N;

	for (p = 0; p <= n; p++)
	{
		if  (p == 0)
			N = 1;
		else
			N = N * x;
	}
	return (N);
}

/**
  * set_bit - sets the value of the bit at an index
  * to 1
  * @n: the number (in decimal)
  * @index: the location of the bit from the right
  * Return: 1, if successful; -1, if not
  */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int p = 0, N, N1, N2, N3, r;
	long int stp = 0;

	if ((n == NULL) || (index >= 64))
		return (-1);
	while (powr(2, p) <= *n)
	{
		stp++;
		p++;
	}
	p--;
	stp--;
	if (p < index)
		p = index;
	N1 = *n;
	N3 = 0;
	while (stp >= 0)
	{
		N = powr(2, p);
		N2 = N1 / N;
		r = N1 % N;
		if (p == index)
			N2 = 1;
		N3 = N3 + (N * N2);
		p--;
		stp--;
		N1 = r;
	}
	*n = N3;
	return (1);
}
