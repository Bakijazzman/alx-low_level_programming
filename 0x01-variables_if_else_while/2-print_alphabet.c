#include <stdio.h>
/**
 * main - print all letters in the alphabet
 *
 *
 * Return: 0 succesful
 *
 *
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
