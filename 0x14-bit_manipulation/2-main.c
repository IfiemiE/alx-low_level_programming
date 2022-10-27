#include "main.h"
#include <stdio.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int n, r;

	n = 17;
	r = get_bit(n, 4);
	printf("bit = %d\n", r);

	return (0);
}
