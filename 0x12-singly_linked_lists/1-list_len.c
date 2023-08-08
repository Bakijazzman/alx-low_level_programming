#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t
 * @h: Head
 *
 * Return: Num of elements
 **/
size_t list_len(const list_t *h)
{
	int node_count;

	for (node_count = 0; h; node_count++, h = h->next)
		;
	return (node_count);
}
