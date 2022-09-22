#include "main.h"
/**
* rot13 - the rot13 cipher
* @s: the given string
* Return: the scrambled or deciphered string
*/
char *rot13(char *s)
{
	int i;
	int num, skip;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		num = s[i] + 13;
		if ((num > 90) && (num <= 103))
		{
			num = 64 + (num - 90);
			skip = 1;
			s[i] = num;
		}
		while (((num > 122) && (num < 135)) && (skip == 0))
		{
			num = 96 + (num - 122);
			skip = 1;
			s[i] = num;
		}
	}
	return (s);
}
