#include <stdio.h>
/**
 * int_index - function that searches fir an integer
 * @array: an array of integers
 * @size: size of the array
 * @cm: the compare function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array && !cmp && size > 0)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++ )
		{
			if (cmp(array[i]) != 0)
			{
				return(-1);
			}
		}
	}
	return (i);
}
