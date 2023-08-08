#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Head of the list
 *
 * Return: Numbers of elements
 **/
size_t print_list(const list_t *h)
{
	size_t  i = 0, num = 0;
	char *out;

	if (!h)
		return (0);

	while (h)
	{
		i = h->len;
		out = h->str;
		if (!out)
		{
			out = "(nil)";
			i = 0;

		}
		printf("[%lu] %s\n", i, out);
		num++;
		h = h->next;
	}
	return (num);
}
