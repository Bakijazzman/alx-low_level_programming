#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list.
 * @h: Points to the head of the list
 * Return: Number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (i);
}
