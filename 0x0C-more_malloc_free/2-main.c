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
	char *s;

	s = _calloc(12, sizeof(char));
	strcpy(s, "Best School");
	printf("%s\n", s);

	return (0);
}
