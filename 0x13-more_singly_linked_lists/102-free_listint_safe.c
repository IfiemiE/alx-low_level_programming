#include "lists.h"

/**
  * free_listint_safe - frees memories allocated to nodes of a linked list
  * @h: a pointer to the first node pointer
  * of the list
  * Return: size of the list free'd
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr, *node;


	if (*h != NULL)
	{
		node = *h;
		ptr = *h->next;
		while (ptr != NULL)
		{
			free(node);
			node = ptr;
			ptr = ptr->next;
		}
		free(node);
		count++;
	}
	h = NULL;
	return (count);
}
