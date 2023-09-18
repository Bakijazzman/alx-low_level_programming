#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: target
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int target;

	while (*s != '\0')
	{
		target = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				target = 1;
			j++;
		}
		j = 0;
		if (target == 0)
			break;
		i++;
		s++;
	}
	return (i);
}
