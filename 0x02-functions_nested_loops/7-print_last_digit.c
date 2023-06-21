#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @lastNum: The input number to check
 * Return: int.
 */

int print_last_digit(int lastNum)
{
	lastNum %= 10;

	if (lastNum < 0)
		lastNum *= -1;

	_putchar(lastNum + '0');
	return (lastNum);
}
