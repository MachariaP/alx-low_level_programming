#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - prints a hash table
* @ht: hash table
* Return: printed hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, flag = 0;
	hash_node_t *last;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (flag == 1)
				printf(", ");
			last = ht->array[index];
			while (last != NULL)
			{
				printf("\'%s\': \'%s\'", last->key, last->value);
				last = last->next;
				if (last)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
