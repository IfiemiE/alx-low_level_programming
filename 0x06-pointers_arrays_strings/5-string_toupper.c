#include "main.h"
/**
* string_toupper - converts all lower cases to upper case
* @s: the given string
* Return: the converted string
*/
char *string_toupper(char *s)
{
	int i;
	char Ucase;
	char Lcase;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
		{
			Ucase = 'A';
			for (Lcase = 'a'; Lcase < (*(s + i)); ++Lcase)
			{
				++Ucase;
			}
			*(s + i) = Ucase;
		}
	}
	return (s);
}

