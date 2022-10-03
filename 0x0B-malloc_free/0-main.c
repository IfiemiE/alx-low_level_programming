#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - test code
  *
  * Return: 0 always
  */
int main(void)
{
	char *str;
	int i;

	str = create_array(50, 'a');
	for (i = 0; i < 10; i++)
	{
		printf("0x%02x ", *(str + i));
	}
	printf("\n");
	return (0);
}
