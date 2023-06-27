#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: the string to be divided into 2
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i / 2;
		while  (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
