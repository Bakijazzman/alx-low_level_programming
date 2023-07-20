#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings followed by a new line
 * @separator: the strings to be printed between the strings
 * @n: the numbers of strings passed in the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p_strings;
	unsigned int i = 0;
	char *string;

	va_start(p_strings, n);

	for (; i <  n; i++)
	{
		string = va_arg(p_strings, char *)
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p_strings)
}
