#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
int a, b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);

return (0);
}