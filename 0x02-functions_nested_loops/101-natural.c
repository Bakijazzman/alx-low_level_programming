#include <stdio.h>

/**
 * main - program that computes and prints the
 * sum of all the multiples of 3 or 5 below 1024
 * Return: 0 success
 */

int main(void)
{
	int value = 0;
	int answer = 0;

	while (value < 1024)
	{
		if (value % 3 == 0 || value % 5 == 0)
		{
			answer += value;
		}
		value += 1;
	}
	printf("%d\n", answer);
	return (0);
}
