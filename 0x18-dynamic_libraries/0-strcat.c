#include "main.h"
/**
* _strcat - to concat two given strings
*
* @dest: first string argument
* @src: second string argument
*
* Return: resulting string
*/
char *_strcat(char *dest, char *src)
{
	int lend = 0;
	int i = 0;

	while (*(dest + lend))
	{
		++lend;
	}

	for (i = 0; *(src + i); i++)
	{
		*(dest + lend + i) = *(src + i);
	}

	*(dest + lend + i) = '\0';

	return (dest);
}
