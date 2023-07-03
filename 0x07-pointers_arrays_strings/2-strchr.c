#include "main.h"
/**
 * _strchr - function that locates a string
 * @s: the string to be checked
 * @c: the character to  be checked for
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (0);
		}
	
}
