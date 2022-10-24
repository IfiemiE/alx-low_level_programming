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
	listint_t *tail;
	listint_t *ptr;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (tail == NULL)
		return (NULL);
	ptr = *head;
	if (ptr == NULL)
		return (tail);
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tail;
	tail->n = n;
	tail->next = NULL;
	return (tail);
}
