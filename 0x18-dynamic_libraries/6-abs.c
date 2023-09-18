#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @number: The input number to check
 * Return: answer
 */

int _abs(int n)
{
	int answer;

	if (n < 0)
	{
		answer = n * (-1);
		return (answer);
	}
	else
		return (n);
}
