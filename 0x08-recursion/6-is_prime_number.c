#include "main.h"
/**
  * is_found - checks if a number is divisible by a guess number
  * not up to the the given number
  * @N: the given number (integer) > 0
  * @n: the given guess integer
  * Return: 0, if no divisor is found; 1, if it is.
  */
int is_found(int N, int n)
{
	int result;

	if (n < N)
	{
		if ((N % n) == 0)
		{
			result = 1;
		}
		else
		{
			result = is_found(N, (n + 1));
		}
	}
	else
	{
		result = 0;
	}
	return (result);
}

/**
  * is_prime_number - checks with the is_found function if a number
  * is prime or not
  * @n: the given number
  * Return: 1, if n is prime, and 0 if it is not.
  */
int is_prime_number(int n)
{
	int response, r;

	if (n < 2)
	{
		response = 0;
	}
	else
	{
		r = is_found(n, 2);
		if (r == 1)
		{
			response = 0;
		}
		else if (r == 0)
		{
			response = 1;
		}
	}

	return (response);
}
