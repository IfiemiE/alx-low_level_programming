#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char *s = " dreddewdrewdd";
char *f = "drew";
char *t;

t = _strstr(s, f);
printf("%s\n", t);
return (0);
}
