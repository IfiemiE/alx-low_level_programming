#include "lists.h"
/**
  * linkedlist_len - computes length of singly linked list
  * @head: head; pointer to the pointer to the first node
  * Return: length of the linked list
  */
int linkedlist_len(listint_t **head)
{
	listint_t *p;
	int len = 0;

	if ((head != NULL) && ((*head) != NULL))
	{
		p = *head;
		while (p != NULL)
		{
			len++;
			p = p->next;
		}
	}
	return (len);
}

/**
  * node_at_index - fetches the node at a given index
  * @head: head; pointer to pointer to the first node
  * @index: given index
  * Return: (pointer to) node at the given index
  */
listint_t *node_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = *head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

/**
  * insert_nodeint_at_index - insert a new node at a given index
  * @head: head; pointer to the pointer to address of first node
  * @idx: given index for insertion
  * @n: (numeric) data of new node
  * Return: (pointer to) newly added node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr1, *ptr2;
	unsigned int Len;

	Len = linkedlist_len(head);
	new_node = malloc(sizeof(listint_t));
	if ((idx > Len) || (new_node == NULL))
		return (NULL);
	if (Len == 0)
	{
		if ((*head == NULL) && (idx == 0))
		{
			*head = new_node;
			new_node->next = NULL;
			return (new_node);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	else
	{
		ptr1 = node_at_index(head, idx - 1);
		if (idx < Len)
			ptr2 = node_at_index(head, idx);
		else
			ptr2 = NULL;
		ptr1->next = new_node;
		new_node->next = ptr2;

		new_node->n = n;
	}
	return (new_node);
}
