#include "main.h"
/**
 * factorial - fuction that returns the factorial of a given number
 * @n: the given number
 * Return: integer (factorial)
 */
int factorial(int n)
{
	int result;

	if (n == 0)
	{
		result = 1;
	}
	else if (n < 0)
	{
		result = -1;
	}
	else
	{
		result = (n * factorial(n - 1));
	}
	return (result);
}
