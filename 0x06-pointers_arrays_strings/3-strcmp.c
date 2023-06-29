#include "main.h"
/**
 * _strcmp - the function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 successful
 */
int _strcmp(char *s1, char *s2)
{
	int res;
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		else if (s1[i] < s2[i])
		{
			res = s1[i] - s2[i];
			return (re);
		}
		i++;
	}
	return (0);
}
