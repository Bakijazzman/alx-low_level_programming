#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t d = n ^ m, c = 0;

	while(d)
	{
		c += d & 1;
		d >>= 1;
	}
	return (c);
}
