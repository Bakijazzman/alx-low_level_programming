#include <stdio.h>
/**
 * main - print alphabet without q and e
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if ((a == 'e') || (a == 'q'))
		{
			continue;
		}
			putchar(a);
	}
	putchar('\n');

	return (0);
}
