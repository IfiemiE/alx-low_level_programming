#include "main.h"
/**
 * main - display the alphabet
 * Return: 0 for a succesful run
 */
int  main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	_putchar(alpha);
}
_putchar('\n');
return (0);
}
