#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Head of the list
 *
 * Return: Numbers of elements
 **/
size_t print_list(const list_t *h)
{
	size_t  i, num;
	char *out;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i = h->len;
		out = h->str;
		if (out == NULL)
		{
			out = "(nil)";
			i = 0;

		}
		printf("[%lu] %s\n", i, out);
		num++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);

	return (num);
}
