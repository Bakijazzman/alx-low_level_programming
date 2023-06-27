#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	new = *b;
	*b = *a;
}
