#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int total1, total2;
	char ch;

	for (total1  = 0; s[total1] != '\0'; total1++)
		;

	for (total2 = 0; total2 < total1 / 2; total2++)
	{
		ch = s[total2];
		s[total2] = s[total1 - 1 - total2];
		s[total1 - 1 - total2] = ch;
	}
}
