#include "main.h"
/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: the first parameter
 * @y: the second parameter
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		result = -1;
	}
	else
	{
		result = (x ** _pow_recursion(x, y - 1));
	}
}
