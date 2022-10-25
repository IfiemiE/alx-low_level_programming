#include "lists.h"

/**
  * get_nodeint_at_index - fetch node at a given node
  * @head: head; pointer to first node
  * @index: given index, counting from zero
  * Return: (pointer to) node at index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
