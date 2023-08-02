#include "lists.h"

/**
 * listint_len - function name
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
