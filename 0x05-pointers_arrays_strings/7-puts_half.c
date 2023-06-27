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
		if (j % 2 != 0)
		{
			j++;
			while (str[j] != '\0')
			{
				_putchar(str[j]);
				j++;
			}
		}
	}
	_putchar('\n');
}