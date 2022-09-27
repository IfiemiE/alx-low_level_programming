#include "main.h"
/**
  * set_string - sets strings from a double pointer
  * @s: the given string
  * @to: string copied
  */
void set_string(char **s, char *to)
{
	char *ptr;

	ptr = to;
	*s = ptr;
}
