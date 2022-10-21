#include "lists.h"

/**
  * list_len - returns number of elements in linked list
  * @h: pointer to head node
  * Return: the linked list length
  */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
