#include <stdio.h>
#include "varaiadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints nnumbers followed by a new line
 * @separator: the string to be printed between the two numbers
 * @n: the nmber of integers passed into the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != 0 && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);

}
