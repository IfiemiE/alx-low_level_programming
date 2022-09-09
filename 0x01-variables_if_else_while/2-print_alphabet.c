#include <stdio.h>
/**
 * main - print letters of the alphabet
 * Return: 0 to terminate program
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}
	putchar('\n');
	return (0);
}
