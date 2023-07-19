#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: the array of functions
 * @size: the size if the array
 * @action: the function to be executed
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
