#include "main.h"
/**
 * _strncat - function that concatenates two strings and
 * does not need to be terminated
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 * Return: dest, the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	return (dest);
}
