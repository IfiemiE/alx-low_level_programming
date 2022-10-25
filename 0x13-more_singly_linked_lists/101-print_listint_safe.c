#include "lists.h"
#include <stdio.h>

/**
  * print_listint_safe - prints the data and memory address of each node
  * of a linked list
  * @head: given head of the list
  * Return: the number of elements/nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
