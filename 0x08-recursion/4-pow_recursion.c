#include "main.h"
/**
  * _pow_recursion - computes the positive integral
  * power of an integer
  *@x: the given base
  *@y: the given power > 0
  *Return: the computed value
  */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		power = -1;
	}
	else if (y == 0)
	{
		power = 1;
	}
	else
	{
		power = x * _pow_recursion(x, (y - 1));
	}
	return (power);
}
