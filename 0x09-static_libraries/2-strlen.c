#include "main.h"
/**
* _strlen - counts and returns string length
* @s: given string
* Return: integer, as length of given string
*/
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count))
	{
		count++;
	}
	return (count);
}
