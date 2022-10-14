#include "variadic_functions.h"
#include <stdio.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int s;

	s = sum_them_all(4, 39, 21, 29, 11);

	printf("%d\n", s);

	return (0);
}
