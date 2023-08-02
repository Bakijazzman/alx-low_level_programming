#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * listint_t linked list.
 * @head: pointer to the pointer of the first node in the list
 * @index: index of the node that should be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *create;
	listint_t *current;
	size_t i;

	if (head == NULL || *head == NULL)
		return (-1);

	create = *head;

	if (index == 0)
	{
		*head = create->next;
		free(create);
		return (1);
	}

	for (i = 0, current = *head; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	create = current->next;
	current->next = create->next;
	free(create);

	return (1);
}
