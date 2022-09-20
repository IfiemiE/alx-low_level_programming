#include "main.h"
#include <stdio.h>
/**
* _atoi - converts a string to an integer
* @s: the given character stream (string)
* Return: extracted and converted integer type
*/
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int result = 0;
	int j;
	int start = 0;
	int stop;

	while (*(s + i))
	{
		if ((*(s + i) == '-') && (start == 0))
		{
			sign = sign * (-1);
		}
		else if (((*(s + i)) != '+') && (*(s + i)) != ' ')
		{
			stop = 1;
			for (j = 0; j <= 9; j++)
			{
				if (*(s + i) == (j + '0'))
				{
					start = 1;
					stop = 0;
					result = result * 10 + j;
					break;
				}
			}
			if (start == 0)
			{
				sign = 1;
			}
		}
		if ((start == 1) && (stop == 1))
		{
			break;
		}
		i++;
	}
	return (sign * result);
}
