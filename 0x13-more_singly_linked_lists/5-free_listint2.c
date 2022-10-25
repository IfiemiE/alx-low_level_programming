#include "lists.h"

/**
  * free_listint2 - frees memories allocated to nodes of a linked list
  * given a pointer to the head
  * @head: a pointer to the first node pointer
  * of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
