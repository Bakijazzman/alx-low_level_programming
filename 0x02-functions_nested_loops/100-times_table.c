#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: input of table n
 * Return: nothing.
 */

void print_times_table(int n)
{
	int ver, hor;
	int value = 0;

	if (n <= 15 && n >= 0)
	{
		for (ver = 0; ver <= n; ver++)
		{
			for (hor = 0; hor <= n; hor++)
			{
				value = (ver * hor);
				if (value < 10)
				{
					if (hor != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(value + '0');
				}
				else if (value < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((value / 100) + '0');
					_putchar(((value % 100) / 10) + '0');
					_putchar((value % 10) + '0');
				}
				if (hor != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
