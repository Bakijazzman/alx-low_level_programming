
#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 *
 * @ht: Hash table to print
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int print = 0;
	unsigned int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node)
		{
			if (print > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			print++;
			node = node->next;
		}
	}

	printf("}\n");
}
