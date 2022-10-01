#include "main.h"
/**
* _strcpy - copies  string from one array into another
*@dest: the destination string
*@src: the source string
* Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = *(src + i);

	return (dest);
}

