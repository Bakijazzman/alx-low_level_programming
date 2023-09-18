#include "main.h"
/**
 * _strcat - function that appends s the src string to the dest
 * string overwritiing and terminating the null byte
 * @dest: the destination string
 * @src: the source string
 * Return: string dest
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
