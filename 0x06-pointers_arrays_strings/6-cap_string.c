#include "main.h"
/**
* cap_string - capitalize all words in a string
* @s: given string
* Return: the resulting string
*/
char *cap_string(char *s)
{
	char Lcase, Ucase;
	int i, cap;

	for (i = 0; *(s + i); i++)
	{
		cap = 0;
		if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
		{
			if (i == 0)
				cap = 1;
			else if ((*(s + i - 1) == '\n') || (*(s + i - 1) == ' '))
				cap = 1;
			else if ((*(s + i - 1) == ';') || (*(s + i - 1) == '.'))
				cap = 1;
			else if ((*(s + i - 1) == '!') || (*(s + i - 1) == '"'))
				cap = 1;
			else if	((*(s + i - 1) == '(') || (*(s + i - 1) == ')'))
				cap = 1;
			else if ((*(s + i - 1) == '{') || (*(s + i - 1) == '}'))
				cap = 1;
			else if	((*(s + i - 1) == '\t'))
				cap = 1;
			else
				continue;

			if (cap == 1)
			{
				Ucase = 'A';
				for (Lcase = 'a'; Lcase < *(s + i); ++Lcase)
					Ucase++;

				*(s + i) = Ucase;
			}
		}
	}
	return (s);
}
