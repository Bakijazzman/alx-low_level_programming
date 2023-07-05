#include "main.h"
/**
 * _sqrt_recursion - function that return the natural square root
 * of a number
 * @n: the parameter
 * Return: the square root of the integer
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n == 0)
	{
		root = 0;
	}
	else if (n == 1)
	{
		root = 1;
	}
	else if (n < 1)
	{
		root = -1;
	}
	else
	{
		root = numRoot(n, 1)
	}
	return (root);
}

/**
 * numRoot - the mathematical illustration of root using recursion
 * @x: parameter 1
 * @y: parameter 2
 * Return: integer
 */
int numRoot(int x, int y)
{
	if (x == (y * y))
	{
		return (y);
	}
	else if (x > (y * y))
	{
		return (numRoot(x. y + 1));
	}
	else
	{
		return (-1);
	}
}
