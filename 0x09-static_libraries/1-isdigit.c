#include "main.h"
/**
 * _isdigit - functions that checks for a digit 0-9
 * @c: the  parameter
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
