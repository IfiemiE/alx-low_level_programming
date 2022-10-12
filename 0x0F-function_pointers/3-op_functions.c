#include "3-calc.h"

/**
  * op_add - adds two integers
  * @a: first integer
  * @b: second integer
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts one integer from anothe
  * @a: first integer
  * @b: second integer
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: first integer
  * @b: second integer
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides one integer by another
  * @a: first integer
  * @b: second integer
  * Return: whole number quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - divides one integer by another
  * @a: first integer
  * @b: second integer
  * Return: whole number remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a % b);
}










