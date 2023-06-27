#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * followed by a new line
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i] + 0);
			i++;
		}
	}
	_putchar('\n');

}
