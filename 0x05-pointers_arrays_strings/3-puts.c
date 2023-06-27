#include "main.h"
/**
 * _puts - function that prints a string and a new line
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int total = 0;

	while (str[total] != '\0')
	{
		total++;
	}
	total--;
	while (total >= 0)
	{
		_putchar(str[total]);
		total--;
	}
	_putchar('\n');
}
