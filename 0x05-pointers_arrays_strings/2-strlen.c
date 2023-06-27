#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the string to be counted
 * Return: an integer of the length
 */
int _strlen(char *s)
{
	int total = 0;

	while (s[total] != '\0')
	{
		total++;
	}

	return (total);
}
