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
  * delete_nodeint_at_index - deletes a node at a given index
  * and reconstruct the links
  * @head: head; pointer to the pointer to address of first node
  * @index: given index for deletion
  * Return: 1, if successful; -1, if not successful
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1, *ptr2;
	unsigned int Len;

	Len = linkedlist_len(head);
	if (Len == 0)
	{
		free(*head);
		return (-1);
	}
	if (index > (Len - 1))
		return (-1);
	if (Len == 1)
	{
		*head = NULL;
	}
	if (index == 0)
	{
		ptr1 = *head;
		*head = (*head)->next;
		free(ptr1);
	}
	else
	{
		ptr1 = node_at_index(head, index - 1);
		ptr2 = node_at_index(head, index);
		ptr1->next = ptr2->next;
		free(ptr2);
	}
	return (1);
}
