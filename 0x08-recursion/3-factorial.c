#include "main.h"
/**
  * factorial - computes the factorial of a positive integer
  * @n: the given number
  * Return: the computed factorial
  */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		fact = -1;
	}
	else if (n == 0)
	{
		fact = 1;
	}
	else
	{
		fact = n * factorial(n - 1);
	}

	return (fact);
}
