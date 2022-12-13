#include "main.h"
/**
* _strncat - to append n byte of string 2
* to given string 1
*
* @dest: first string argument
* @src: second string argument
* @n: a given number of byte to be
*  exctracted from string 2
* Return: resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int lend = 0;
	int i = 0;

	while (*(dest + lend))
	{
		++lend;
	}

	for (i = 0; (i < n) && *(src + i) != '\0'; i++)
	{
		*(dest + lend + i) = *(src + i);
	}

	*(dest + lend + i) = '\0';

	return (dest);
}
