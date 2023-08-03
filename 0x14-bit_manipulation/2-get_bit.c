#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @index: index starting from 0
 * @n: the bit to be gotten
 * Return: value of bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
