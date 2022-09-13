#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the number operated upon
 * Return: absolute value of n
 */
int _abs(int n)
{
	int r;

	if (n >= 0)
	{
		r = n;
	}
	else
	{
		r = -n;
	}
	return (r);
}
