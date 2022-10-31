#include "main.h"

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int r;

	r = create_file("testfile", NULL);
	printf("\nreturn:%d\n", r);

	return (0);
}
