#include "hash_tables.h"

/**
* hash_table_create - creates a hash table.
* @size: size of input array
* Return: pointer to new hash table NULL if otherwise
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table  = malloc(sizeof(hash_table_t));
	if (!new_table)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
