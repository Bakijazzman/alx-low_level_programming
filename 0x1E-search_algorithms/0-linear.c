#include "search_algos.h"
/**
 * linear_search - a linear search algorithm
 * @array: the array to search
 * @size: size of the array
 * @value: the value to look for
 * Return: -1 if value not found or the first index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
