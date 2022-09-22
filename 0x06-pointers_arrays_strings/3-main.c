#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char s1[] = "I am a man";
char s2[] = "I am a woman";

printf("%d\n", _strcmp(s1, s2));

printf("%d\n", _strcmp(s2, s1));


return (0);
}
