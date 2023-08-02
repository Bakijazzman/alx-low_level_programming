#include "lists.h"
/**
 * sum_listint - function that sums all the data(n)
 * @head: pointer to the first node
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	int total = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		i = head->n;
		total += i;

		head = head->next;
	}
	return (total);
}
