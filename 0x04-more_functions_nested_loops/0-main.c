#include "main.h"
#include <stdio.h>
/**
* main - checks code for _isupper()
* Return: 0 always
*/
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

