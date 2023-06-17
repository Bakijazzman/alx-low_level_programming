#include <stdio.h>
/**
 * main - print numbers followed by comma and space
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int n = 48;
	int n2 = 44;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(n2);
			putchar(32);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
