#include "function_pointers.h"
#include <stdio.h>
/**
  * disp_int - prints name
  * @a: integer argument
  */
void disp_int(int a)
{
	printf("%d\n", a * a);
}
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	void (*func_ptr)(int);

	func_ptr = disp_int;
	array_iterator(arr, 5, func_ptr);

	return (0);
}
