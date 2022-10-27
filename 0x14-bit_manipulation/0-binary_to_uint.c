#include "main.h"

/**
  * binary_to_uint - converts a binary to decimal
  * @b: the given binary
  * Return: the converted number, or zero if not
  * successful
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, k;

	if (b == NULL)
		return (num);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (num);
		if (b[i] == '0')
			k = 0;
		else
			k = 1;
		num = (num * 2) + k;
	}
	return (num);
}
