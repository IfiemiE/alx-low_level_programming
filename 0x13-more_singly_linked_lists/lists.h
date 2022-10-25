#ifndef LISTS_H
#define LISTS_H
#include <unistd.h>
#include <stdlib.h>

/**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  *
  */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void _putchar(char);
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);




#endif
