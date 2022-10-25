#include "lists.h"

/**
  * free_listint - frees memories allocated to nodes of a linked list
  * @head: a pointer to the first node pointer
  * of the list
  */
void free_listint(listint_t *head)
{
	listint_t *ptr, *node;


	if (head != NULL)
	{
		node = head;
		ptr = head->next;
		while (ptr != NULL)
		{
			free(node);
			node = ptr;
			ptr = ptr->next;
		}
		free(node);
	}
}
