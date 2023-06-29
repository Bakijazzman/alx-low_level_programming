#include "main.h"
/**
 * string_toupper - function that swaps lowercase letters
 * to upper case
 * @ch: the strings to be swapped
 * Return: all upper
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 97 && ch[i] <= 122)
			ch[i] = ch[i] - ' ';
		i++;
	}
	return (ch);
}
