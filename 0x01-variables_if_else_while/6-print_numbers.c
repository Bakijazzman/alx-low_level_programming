#include <stdio.h>
/**
 * main - print the numbers from 0-9
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
