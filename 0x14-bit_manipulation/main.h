#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>

void _putchar(char);
unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
int get_endianness(void);























#endif
