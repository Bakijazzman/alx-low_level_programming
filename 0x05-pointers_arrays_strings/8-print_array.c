#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: the array to be printed
 * @n: number of times
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[n - 1]);
		}

	}
	printf("\n");
}
