#include "main.h"
/**
 * _islower - determines if a character is lower case or not
 * @ch: the character to be checked
 * Return: 1, if true and 0 if not
 */
int _islower(char ch)
{
int r = 0;
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
{
	if (lc == ch)
	{
		r = 1;
		break;
	}
}
return (r);
}
