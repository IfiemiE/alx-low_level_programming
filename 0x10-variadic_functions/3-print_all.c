#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_all - prints list of arguments
  * based on a passed-in string format
  * @format: passed-in string of format characters
  */
void print_all(const char * const format, ...)
{
	int i, skipped;
	va_list ptr;
	char ch, *s;

	va_start(ptr, format);
	i = 0;
	while (*(format + i) != '\0')
	{
		ch = *(format + i);
		skipped = 0;
		switch (ch)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				skipped = 1;
		}
		if ((*(format + i + 1) != '\0') && (skipped == 0))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
