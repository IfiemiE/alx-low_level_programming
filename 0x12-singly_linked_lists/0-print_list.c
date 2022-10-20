#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints number of nodes in linked list
  * @h: pointer to head node
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
