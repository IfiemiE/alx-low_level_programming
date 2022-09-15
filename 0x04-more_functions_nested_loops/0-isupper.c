#include "main.h"
/**
* _isupper - checks if a character is upper case or not
* @c: the given character
* Return: 1 if upper and 0 if not
*/

int _isupper(char c)
{
	char alpha;
	int r = 0;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (alpha == c)
		{
			r = 1;
			break;
		}
	}
	return (r);
}
