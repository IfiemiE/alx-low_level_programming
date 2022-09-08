#include <stdio.h>
#include <inttypes.h>
/**
 * main - displays the sizes in bytes of some data types
 * Return: 0 to terminate program
 */
int main(void)
{
char size_char;
int size_int;
long int size_L;
long long int size_LL;
float size_f;
printf("Size of a char: %d byte(s)\n", sizeof(size_char));
printf("Size of an int: %d byte(s)\n", sizeof(size_int));
printf("Size of a long int: %d byte(s)\n", sizeof(size_L));
printf("Size of a long long int: %d byte(s)\n", sizeof(size_LL));
printf("Size of a float: %d byte(s)\n", sizeof(size_f));
return (0);
}
