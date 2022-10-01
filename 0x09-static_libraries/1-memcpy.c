#include "main.h"
/**
* _memcpy - copies memory of n bytes
* @n: number of bytes from start point
* @src: string to copy from
* @dest: the copied and returned string
* Return: copied string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
