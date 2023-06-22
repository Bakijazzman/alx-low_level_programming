#include "main.h"

/**
 * print_most_numbers - prints number from 0-9 exluding 2 & 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		if (b != 2 && b != 4)
			_putchar(b + '0');
			b++;
	}
	_putchar('\n');
}
