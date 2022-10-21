#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints number of nodes in linked list
  * @h: pointer to head node
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
