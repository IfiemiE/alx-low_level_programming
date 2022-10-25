#include "lists.h"

/**
  * pop_listint - frees first node memory,and establish
  * second node as first
  * @head: a pointer to the first node pointer
  * of the list
  * Return: the data of the deleted (freed) node
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if ((head == NULL) || (*head == NULL))
		return (0);
	new_head = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new_head;
	return (n);
}
