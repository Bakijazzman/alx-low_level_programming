#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the numbers of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int result = 0;

	init = a;
	final = a;
	n -= 1;
	while (i < n)
		i += 1;
	while (j <= i)
	{
		result = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = result;
		j++;
		i--;
	}
}
