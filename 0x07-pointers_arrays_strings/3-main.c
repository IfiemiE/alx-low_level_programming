#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char *s = "hello, world";
char *f = "oleh";
unsigned int n;

n = _strspn(s, f);
printf("%u\n", n);
return (0);
}
