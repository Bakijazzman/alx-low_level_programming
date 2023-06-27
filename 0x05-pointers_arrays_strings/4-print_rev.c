#include "main.h"
/**
 * print_rev - function that prints tthe reverse of a string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int total = 0;

	while  (s[total] != '\0')
	{
		total++;
	}
	total--;
	while (total >= 0)
	{
		_putchar(s[total]);
	}
	_putchar('\n');
}
