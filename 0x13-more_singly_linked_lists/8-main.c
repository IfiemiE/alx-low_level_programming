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
	int total;

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
	total = sum_listint(h);
	printf("sum of data in list = %d\n", total);
	free_listint(h);
	return (0);
}
