#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the memory area
 * @src: the memory area
 * @n: copies
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)
	{
		int num = 0;

		while (num < n)
		{
			dest[num] = src[num];
			num++;
		}
	}
	return (dest);
}
