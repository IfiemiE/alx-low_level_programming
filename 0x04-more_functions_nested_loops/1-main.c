#include "main.h"
#include <stdio.h>
/**
* main - to check code of _isdigit
* Return: 0 always
*/
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
