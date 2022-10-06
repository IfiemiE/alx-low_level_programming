#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	char *p, *p1;

	p = malloc(12 * sizeof(char));
	strcpy(p, "Best School");
	printf("%s\n", p);
	p1 = _realloc(p, 12, 14);
	printf("%s\n", p1);

	return (0);
}
