#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all passed-in arguments
  * (besides the first argument).
  * @n: first argument, indicating count of other parameters
  * Return: computed sum of the arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);
	for (i = 1; i <= n; i++)
		sum = sum + va_arg(ptr, int);
	return (sum);
}
