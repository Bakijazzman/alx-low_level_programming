#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: tge string to be counted
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(1 + _strlen_recursion(s));
		return (s);
	}
	else
	{
		return (0);
	}

}
