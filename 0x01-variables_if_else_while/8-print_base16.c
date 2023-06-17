#include <stdio.h>
/**
 * main - print base16 numbers
 * Return:0 success
 *
 */
int main(void)
{
	int a = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
