#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table.
  * @size: The size of the array.
  * Return: pointer to the created hash table.
  *         otherwise, If an error occurs, NULL.
  *
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(*htable));
	if (htable == NULL)
		return (NULL);
	htable->size = size;

	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}