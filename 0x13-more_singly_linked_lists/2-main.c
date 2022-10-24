#include "lists.h"
#include <stdio.h>

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	listint_t *head;
	listint_t oldfirst;
	listint_t second;
	listint_t hello = {8, NULL};
	listint_t *newfirst;
	size_t n;

	oldfirst.n = 9;
	oldfirst.next = &second;
	second.n = 7;
	second.next = &hello;
	head = &oldfirst;
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	newfirst = add_nodeint(&head, 10);
	head = newfirst;
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	n = print_listint(head);
	free(newfirst);
	return (0);
}
