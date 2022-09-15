#include "main.h"
/**
* _isdigit - decides if a given character is a digit or not
*@c: a given charater
* Return: 1 if a digit, and 0 if not
*/
int _isdigit(char c)
{
	int n;
	int r = 0;

	for (n = 0; n <= 9; n++)
	{
		if ((n + '0') == c)
		{
			r = 1;
			break;
		}
	}
	return (r);
}
