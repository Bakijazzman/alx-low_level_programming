#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void.
 */

void times_table(void)
{
	int ver, hor;
	int value = 0;

	for (ver = 0; ver < 10; ver++)
	{
		for (hor = 0; hor < 10; hor++)
		{
			value = (ver * hor);
			if (value < 10)
			{
				if (hor != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(value + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
			if (hor != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
