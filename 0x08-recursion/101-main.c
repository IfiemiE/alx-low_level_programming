#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
int r;

r = wildcmp("***", "**");
printf("%d\n", r);
return (0);
}
