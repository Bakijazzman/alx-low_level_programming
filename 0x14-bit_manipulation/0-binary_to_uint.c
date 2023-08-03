#include "main.h"
/**
 * binary_to_uint - conerts a binary number to unsigned int
 * b@: pointer to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t n = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		n <<= 1;
		n |= *b - '0';
		b++;
	}
	return (n);
}
