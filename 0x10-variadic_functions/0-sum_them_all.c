#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that prints the sum of all its parameters
 * @n: number of arguements
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list _integers;
	unsigned int i, sum;

	va_start(_integers, n);

		for (i = 0; i < n; i++)
			sum = sum + va_arg(_integers, int);
	va_end(_integers);

	return (sum);
}
