#include <stdio.h>
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
printf("Size of a char: %c byte(s)\n", sizeof(size_char));
printf("Size of an int: %d byte(s)\n", sizeof(size_int));
printf("Size of a long int: %ld byte(s)\n", sizeof(size_L));
printf("Size of a long long int: %lld byte(s)\n", sizeof(size_LL));
printf("Size of a float: %f byte(s)\n", sizeof(size_f));
return (0);
}
