#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the vvalue to search for in the array
 * Return: -1 if value or array is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0;
	size_t half = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			half = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[half] < value)
			{
				left = half + 1;
			}
			else if (array[half] > value)
			{
				right = half - 1;
			}
			else
			{
				return (half);
			}
		}
	}
	return (-1);
}
