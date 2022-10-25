#include "lists.h"
#include <stdio.h>

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	listint_t *h;
	listint_t *first;
	listint_t *second;
	listint_t *last;
	size_t n;

	h = malloc(sizeof(listint_t));
	first = malloc(sizeof(listint_t));
	second = malloc(sizeof(listint_t));
	last = malloc(sizeof(listint_t));
	if ((h == NULL) || (first == NULL))
		return (0);
	if ((second == NULL) || (last == NULL))
		return (0);
	h = first;
	first->n = 32;
	first->next = second;
	second->n = 16;
	second->next = last;
	last->n = 8;
	last->next = NULL;

	n = listint_len(h);
	printf("old number of elements---> %lu elements\n", n);
	n = print_listint(h);
	n = pop_listint(&h);
	n = print_listint(h);
	n = listint_len(h);
	printf("new number of elements---> %lu elements\n", n);
	free_listint(h);
	return (0);
}
