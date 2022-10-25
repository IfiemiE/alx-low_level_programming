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
	listint_t *node_i;
	int i;

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
	for (i = 0; i < 3; i++)
	{
		node_i = get_nodeint_at_index(h, i);
		printf("data at node %d = %d\n", i, node_i->n);
	}
	free_listint(h);
	return (0);
}
