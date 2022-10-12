#include "function_pointers.h"
#include <stdio.h>
/**
  * display - prints name
  * @str: name string
  */
void display(char *str)
{
	printf("%s\n", str);
}
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	char *name = "Ifiemi Erigi";
	void (*func_ptr)(char *);

	func_ptr = display;
	print_name(name, func_ptr);

	return (0);
}
