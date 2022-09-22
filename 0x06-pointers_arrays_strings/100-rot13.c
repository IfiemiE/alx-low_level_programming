#include "main.h"
/**
* rot13 - the rot13 cipher
* @s: the given string
* Return: the scrambled or deciphered string
*/
char *rot13(char *s)
{
int i;
int num;

for (i = 0; *(s + i) != '\0'; i++)
{
	num = s[i] + 13;
	if ((num > 90) && (num <= 103))
		num = 64 + (num - 90);
	else if ((num > 122) && (num < 135))
		num = 96 + (num - 122);

	s[i] = num;
}
return (s);
}
