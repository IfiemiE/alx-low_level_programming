#include "main.h"
/**
 * main - checks the sign code
 * Return: 0 always
 */
int main(void)
{
int r;

r = print_sign(0xff);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
