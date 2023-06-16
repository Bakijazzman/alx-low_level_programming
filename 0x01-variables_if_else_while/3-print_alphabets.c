#include <stdio.h>
/**
 * main - print alphabeths in higher and lower case
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int a = 'a';
	int A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
