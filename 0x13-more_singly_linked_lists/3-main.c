#include "lists.h"
#include <stdio.h>

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	listint_t *head;
	listint_t first;
	listint_t second;
	listint_t hello = {8, NULL};
	listint_t *newlast;
	size_t n;

	first.n = 9;
	first.next = &second;
	second.n = 7;
	second.next = &hello;
	head = &first;
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	newlast = add_nodeint_end(&head, 98);
	printf("last node data = %d\n", newlast->n);
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	n = print_listint(head);
	free(newlast);
	return (0);
}
