#include "lists.h"

/**
  *  add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
  * @head: double pointer to the head of the list
  * @n: integer to add to the new node
  *
  * Return:  the address of the new element, as the new tail,
  * or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail;

	new_tail = malloc(sizeof(dlistint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
		return (new_tail);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = new_tail;
	new_tail->prev = *head;
	return (new_tail);
}
