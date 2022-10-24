#include "lists.h"

/**
  * add_nodeint - adds a node at the beginning
  * of a linked list
  * @head: a pointer to the first node pointer
  * of the list
  * @n: value stored at new node
  * Return: the pointer to the new head
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
