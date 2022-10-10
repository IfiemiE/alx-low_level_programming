#include <stdio.h>
#include "4-sum.h"
/**
  * main - tests codes
  *
  * Return: 0 always
  */
int main(void)
{
	int x = 7;
	int y = 5;

	printf("the sum of %d and %d is %d\n", x, y, SUM(x - 1, y + 1));
	return (0);
}
