#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, j = 93, count = 0;
	size_t a = 0, b = 1, sum;
	size_t a_half1, b_half2, aa_half1, bb_half2;
	size_t HAlf, Half;

	while (i < 92)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
		i++;
	}
	a_half1 = a / 10000000000;
	aa_half1 = b / 10000000000;
	b_half2 = a % 10000000000;
	bb_half2 = b % 10000000000;

	for (; j < 99; j++)
	{
		HAlf = a_half1 + aa_half1;
		Half = b_half2 + bb_half2;
		if (b_half2 + bb_half2 > 9999999999)
		{
			HAlf += 1;
			Half %= 10000000000;
		}

		printf("%lu%lu", HAlf, Half);
		if (count != 98)
			printf(", ");

		a_half1 = aa_half1;
		b_half2 = bb_half2;
		aa_half1 = HAlf;
		bb_half2 = Half;
	}
	printf("\n");
	return (0);
}
