#include "main.h"

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int r;

	r = read_textfile("testfile", 13);
	printf("\nreturn:%d\n", r);


	return (0);
}
