#include <stdio.h>
/**
 * _isupper  - function that checks for uppercase cahracter
 * @c: the parameter or arguement
 * Return: 1 if uppercase  Return: 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
