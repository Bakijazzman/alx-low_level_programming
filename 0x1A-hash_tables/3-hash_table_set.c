#include "hash_tables.h"
/**
 * hash_table_set - add an element
 * @ht: existing hash table
 * @key: key to add
 * @value: value of the key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (!new_value)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}

		current = current->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * create_node - Function that creates a hash node
 *
 * @key: key
 * @value: value
 *
 * Return: Address of the new hash node
 **/
hash_node_t *create_node(const char *key, const char *value)
{
	char *new_key = strdup(key);
	char *new_value = strdup(value);
	hash_node_t *new_node = calloc(1, sizeof(hash_node_t));

	if (!new_key)
		return (NULL);

	if (!new_value)
	{
		free(new_key);
		return (NULL);
	}

	if (!new_node)
	{
		free(new_key);
		free(new_value);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->key = new_key;
	new_node->value = new_value;

	return (new_node);
}
