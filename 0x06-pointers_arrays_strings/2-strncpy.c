#include "main.h"
/**
* _strncpy - copies n byte from one string
* into another string
*
* @dest: destination string
* @src: source string
* @n: number of bytes to be copied
*
* Return: a pointer to string copy
*/
char *_strncpy(char *dest, char *src, int n)
{
	int lens2 = 0;
	int i = 0;

	while (*(src + lens2))
		++lens2;

	for (i = 0; i < n; i++)
	{
		if (i < lens2)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
	}
	*(dest + i) = '\0';
	return (dest);
}
