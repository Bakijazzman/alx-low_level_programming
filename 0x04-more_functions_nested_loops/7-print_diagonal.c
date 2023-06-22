#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * on the terminal
 * @n: parameter parsed in
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
