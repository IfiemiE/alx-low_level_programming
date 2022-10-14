#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints number arguments
  * separated by a passed-in separator
  * @separator: a character for separating the list
  * @n: number of integers in the list
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int num;

	if (separator != NULL)
	{
		va_start(ptr, n);
		for (i = 1; i <= n; i++)
		{
			num = va_arg(ptr, int);
			printf("%d", num);
			if (i < n)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(ptr);
}
