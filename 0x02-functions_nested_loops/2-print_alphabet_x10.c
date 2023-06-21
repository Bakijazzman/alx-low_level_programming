#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower case
 * follow by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int number;

	number = 0;
	while (number < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		number++;
	}

}
