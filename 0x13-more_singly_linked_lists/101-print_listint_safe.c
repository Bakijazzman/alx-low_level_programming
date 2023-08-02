#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prov = NULL;
	const listint_t *lon = NULL;
	unsigned int  i = 0, new;

	prov = head;
	for (;prov != NULL; i++)
	{
		printf("[%p] %d\n", (void *)prov, prov->n);
		prov = prov->next;
		lon = head;
		new = 0;
		while (new < i)
		{
			if (prov == lon)
			{
				printf("-> [%p] %d\n", (void *)prov, prov->n);
				return (i);
			}
			lon = lon->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
