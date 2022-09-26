#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char buffer[50] = "Replace the first portion with a byte";
unsigned int n = 8;
char dest[50] = "Initialize a string with another string";

/**
* printf("before replacement: \n%s\n", buffer);
*/
_memcpy(dest, buffer, n);
printf("After copying: \n%s\n", dest);
return (0);
}
