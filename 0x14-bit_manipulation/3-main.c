#include "main.h"
#include <stdio.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	unsigned long int n = 39;
	int r;

	r = set_bit(&n, 3);
	printf("success: %d\n", r);
	printf("value: %lu\n", n);

	return (0);
}
