#include "lists.h"

/**
  * sum_listint - sums all data in nodes of a linked list
  * @head: head of linked list
  * Return: sum of (numeric) data
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
