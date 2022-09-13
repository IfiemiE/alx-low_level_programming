#include "main.h"
/**
 * print_alphabet - display the alphabet in lower casie
 *
 */

void print_alphabet(void)
{
char alpha;

alpha = 'a';
while (alpha <= 'z')
{
	_putchar(alpha);
	alpha++;
}
_putchar('\n');
}
