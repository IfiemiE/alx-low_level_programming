#include "main.h"
/**
 * main - display the alphabet
 * Return: 0 for a succesful run
 */
int  main(void)
{
char alpha;

alpha = 'a';
while (alpha <= 'z')
{
	_putchar(alpha);
	alpha++;
}
_putchar('\n');
return (0);
}
