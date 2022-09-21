#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char s1[] = "";
char s2[] = "";

printf("%d\n", _strcmp(s1, s2));

printf("%d\n", _strcmp(s1, s1));


return (0);
}
