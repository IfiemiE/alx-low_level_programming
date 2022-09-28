#include "main.h"

/**
  * check_root - checks to confirm if an integer guess is
  * the square root of a given number
  * @N: the number
  * @x: the guess root
  * Return: return x if it is the root, -1 if no such integer
  */
int check_root(int N, int x)
{
	int response;

	if (x * x > N)
	{
		response = -1;
	}
	else if (x * x == N)
	{
		response = x;
	}
	else
	{
		response = check_root(N, x + 1);
	}
	return (response);
}


/**
  * _sqrt_recursion - computes the natural square root
  * of a number
  * @n: the number
  * Return: the natural square root of n
  */
int _sqrt_recursion(int n)
{
	int r00t;

	if (n < 0)
	{
		r00t = -1;
	}
	else
	{
		r00t = check_root(n, 0);
	}
	return (r00t);
}
