#ifndef FUNC_POINTERS_H
#define FUNC_POINTERS_H
#include <unistd.h>

void _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void(*)(int));










#endif
