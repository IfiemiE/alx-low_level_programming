#include "main.h"
#include <stdio.h>
/**
* main - tests code
* Return: 0 always
*/
int main(void)
{
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world!hello 0123456hello world\thello world.hello world\n";
char *ptr;

ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
