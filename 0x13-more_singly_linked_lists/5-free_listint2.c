#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to the pointer of the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *create;

	if (head == NULL)
		return;

	while ((create = *head) != NULL)
	{
		*head = (*head)->next;
		free(create);
	}
}
