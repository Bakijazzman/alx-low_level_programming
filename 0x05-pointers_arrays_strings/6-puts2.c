#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * followed by a new line
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_puchar(str[i]);
		}
	}
	_putchar('\n');

}
