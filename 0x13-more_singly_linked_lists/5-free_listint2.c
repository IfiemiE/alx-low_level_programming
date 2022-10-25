#include "lists.h"

/**
  * free_listint2 - frees memories allocated to nodes of a linked list
  * given a pointer to the head
  * @head: a pointer to the first node pointer
  * of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *node;

	if (head != NULL)
	{
		if (*head != NULL)
		{
			node = *head;
			ptr = node->next;
			while (ptr != NULL)
			{
				free(node);
				node = ptr;
				ptr = ptr->next;
			}
			free(node);
		}
		head = NULL;
	}
}
