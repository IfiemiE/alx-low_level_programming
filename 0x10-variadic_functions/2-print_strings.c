#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - prints string arguments
  * separated by a passed-in separator
  * @separator: a character for separating the string list
  * @n: number of strings in the list
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(ptr, char *);
		printf("%s", str);
		if ((i < n) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
