#include "main.h"
/**
* swap_int - swap values of two integers
* via their memory addresses
* @a: first integer
* @b: second integer
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
