#include "lists.h"

/**
 * add_node - Adds a new node
 * @head: Head
 * @str: The new str for the node
 *
 * Return: Address, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *add;

	add = malloc(sizeof(list_t) * 1);
	if (!str || !head)
		return (NULL);

	if (!add)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		;

	add->str = malloc(i + 1);
	if (!(add->str))
	{
		free(add);
		return (NULL);
	}

	add->str = strdup(str);
	add->len = i;
	add->next = *head;
	*head = add;

	return (add);
}
