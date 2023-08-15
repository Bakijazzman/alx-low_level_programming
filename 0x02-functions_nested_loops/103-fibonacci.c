#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t a = 0, b = 1, sum;
	float total;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			total += sum;
		}

		a = b;
		b = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
