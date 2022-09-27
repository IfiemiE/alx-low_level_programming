#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char *s1 = "Bob Dylan";
char *s2 = "Robert Allen";

printf("%s, %s\n", s1, s2);
set_string(&s2, s1);
printf("%s, %s\n", s1, s2);
return (0);
}
