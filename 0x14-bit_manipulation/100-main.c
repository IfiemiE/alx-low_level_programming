#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int r;

	r = get_endianness();
	printf("result = %d\n", r);



	return (0);
}
