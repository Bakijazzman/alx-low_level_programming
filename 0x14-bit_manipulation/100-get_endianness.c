#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: (big)0 or 1(small)
 */
int get_endianness(void)
{
	size_t n = 1;
	char *c = (char *)&n;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
