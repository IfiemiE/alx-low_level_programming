#include "main.h"
/**
* rev_string - reverses the character positions
* in a string (character array)
* @s: given string
*/
void rev_string(char *s)
{
	int count = 0;
	int k, L;
	char swap;

	while (*(s + count))
	{
		count++;
	}
	count--;
	if ((count % 2) == 0)
	{
		L = count / 2;
	}
	else
	{
		L = (count - 1) / 2;
	}
	for (k = 0; k <= L; k++)
	{

		swap = *(s + k);
		*(s + k) = *(s + count - k);
		*(s + count - k) = swap;
	}
}
