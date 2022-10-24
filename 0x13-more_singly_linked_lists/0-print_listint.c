#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints the data in each node
  * of a linked list
  * @h: given head of the list
  * Return: the number of elements/nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
