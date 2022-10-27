#include "main.h"
#include <stdio.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	char *b = "10001001";
	unsigned int n;

	n = binary_to_uint(b);
	printf("the converted decimal = %u\n", n);


	return (0);
}
