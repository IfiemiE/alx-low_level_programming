#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>

/**
  * struct list_s - singly linked list
  * @str: string
  * @len: length of string
  * @next: pointer to next node
  * Description: singly linked list node structure
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void _putchar(char);
size_t print_list(const list_t *h);



#endif
