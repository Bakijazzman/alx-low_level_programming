#include "lists.h"
/**
 * add_node_end - adds new node to end of the node
 * @head : pointer to head
 * @str : string
 * Return: address of new element or null if  failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t) * 1);
	char *buffer = strdup(str);

	if (!new)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = malloc(i + 1);
	if (!str)
	{
		return (NULL);
	}

	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->str = buffer;
	new->len = i;
	new->next = NULL;

	for (; *head;)
		head = &(*head)->next;

	*head = new;
	return (new);


}
