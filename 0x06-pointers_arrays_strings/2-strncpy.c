#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the bytes of copy
 * Return: tthe copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
