#include "main.h"

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int r;

	r = append_text_to_file("testfile", NULL);
	printf("\nreturn:%d\n", r);

	return (0);
}
