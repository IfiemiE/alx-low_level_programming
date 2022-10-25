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
	listint_t *new;
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
	printf("number of elements---> %lu elements\n", n);
	new = add_nodeint(&h, 4);
	h = new;
	n = listint_len(h);
	printf("number of elements---> %lu elements\n", n);
	n = print_listint(h);
	free_listint2(&h);
	return (0);
}
