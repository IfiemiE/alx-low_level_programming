#include "main.h"
/**
* leet - converts string into the leet code - 1337
* @s: the given string
* Return: the coded string
*/
char *leet(char *s)
{
	int i, j;
	char *alpha = "aAeEoOtTlL";
	char *l33t = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == *(alpha + j))
			{
				*(s + i) = *(l33t + j);
			}
		}
	}
	return (s);
}
