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
	size_t n;

	first.n = 9;
	first.next = &second;
	second.n = 7;
	second.next = &hello;
	head = &first;
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	return (0);
}
