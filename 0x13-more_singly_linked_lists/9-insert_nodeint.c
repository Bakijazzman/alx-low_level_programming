#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a give location.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *create;
	listint_t *c;

	c = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && c != NULL; i++)
		{
			c = c->next;
		}
	}

	if (c == NULL && idx != 0)
		return (NULL);

	create = malloc(sizeof(listint_t));
	if (create == NULL)
		return (NULL);

	create->n = n;

	if (idx == 0)
	{
		create->next = *head;
		*head = create;
	}
	else
	{
		create->next = c->next;
		c->next = create;
	}

	return (create);
}
