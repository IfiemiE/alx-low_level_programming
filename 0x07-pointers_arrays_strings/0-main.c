#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char buffer[50] = "Replace the first portion with a byte";
char b = '0';

printf("before replacement: \n%s\n", buffer);
_memset(buffer, b, 5);
printf("After replacement: \n%s\n", buffer);
return (0);
}
