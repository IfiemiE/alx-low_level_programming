#include "main.h"

/**
  * print_name - a callback function
  * to print name
  * @name: given name passed-in as argument
  * @f: a passed-in function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if ((name) || (f))
		f(name);
}
