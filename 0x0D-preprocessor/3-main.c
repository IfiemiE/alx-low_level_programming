#include <stdio.h>
#include "3-function_like_macro.h"
/**
  * main - prints name of file from which
  * program was compiled
  * Return: 0 always
  */
int main(void)
{
	int x = -5;

	printf("absolute value of %d is %d\n", x, ABS(x));
	return (0);
}
