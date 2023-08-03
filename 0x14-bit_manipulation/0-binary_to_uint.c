#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	size_t n = 0, j, i = 0;

	if (!b)
		return (0);

	while (b[n] != '\0')
		n++;
	n--;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
		{
			return (0);
		}
		else if (b[j] == '1')
		{
			i += (1 * (1 << n));
		}
		j++;

		n = n - 1;
	}
	return (i);
}
