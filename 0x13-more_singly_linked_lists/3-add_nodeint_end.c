#include "lists.h"

/**
  * add_nodeint_end - adds a node at the beginning
  * of a linked list
  * @head: a pointer to the first node pointer
  * of the list
  * @n: value stored at new node
  * Return: the pointer to the new tail
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
