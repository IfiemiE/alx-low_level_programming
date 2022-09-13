#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * @ch: character to be checked
 * Return: 1 if character is alphabet and 0 if not
 */
int _isalpha(int ch)
{
	char lc;
	char uc;
	int r = 0;

	lc = 'a';
	uc = 'A';
	while ((lc <= 'z') && (uc <= 'Z'))
	{
		if ((lc == ch) || (uc == ch))
		{
			r = 1;
			break;
		}
		lc++;
		uc++;
	}
	return (r);
}
