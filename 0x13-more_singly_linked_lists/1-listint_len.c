#include "lists.h"
#include <stdio.h>

/**
  * listint_len - computes the length of a linked list
  * @h: given head of the list
  * Return: the number of elements/nodes
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
