#include "function_pointers.h"
#include <stdio.h>
/**
  * greater_int - prints name
  * @a: integer argument
  * Return: 1 or 0
  */
int greater_int(int a)
{
	if (a > 9)
		return (1);
	else
		return (0);
}
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int arr[] = {1, 0, -7, 3, 5, 7, 9, 2};
	int (*func_ptr)(int);
	int r;

	func_ptr = greater_int;
	r = int_index(arr, 8, func_ptr);
	printf("found at position: %d\n", r);

	return (0);
}
