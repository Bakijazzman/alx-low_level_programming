#include <stdio.h>
/**
 * main - preint reversed alphabet
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
