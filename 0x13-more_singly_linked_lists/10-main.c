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
	listint_t *third;
	listint_t *last;
	size_t n;

	h = malloc(sizeof(listint_t));
	first = malloc(sizeof(listint_t));
	second = malloc(sizeof(listint_t));
	third = malloc(sizeof(listint_t));
	last = malloc(sizeof(listint_t));
	if ((h == NULL) || (first == NULL))
		return (0);
	if ((second == NULL) || (third == NULL) || (last == NULL))
		return (0);
	h = first;
	first->n = 32;
	first->next = second;
	second->n = 16;
	second->next = third;
	third->next = last;
	third->n = 8;
	last->n = 4;
	last->next = NULL;
	free(first);
	free(second);
	free(third);
	free(last);
	h = NULL;
	n = print_listint(h);
	printf("number of nodes--->%ld\n", n);
	n = delete_nodeint_at_index(&h, 4);
	n = print_listint(h);
	printf("number of nodes--->%ld\n", n);
	free_listint(h);
	return (0);
}
