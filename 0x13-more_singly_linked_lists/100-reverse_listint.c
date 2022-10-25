#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: the head; pointer to the pointer to the first node
  * Return: pointer to the first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *right, *left;

	if ((head == NULL) || (*head == NULL))
		return (NULL);

	left = NULL;
	while (*head != NULL)
	{
		right = *head;
		*head = (*head)->next;
		right->next = left;
		left = right;
	}
	*head = right;
	return (*head);
}
