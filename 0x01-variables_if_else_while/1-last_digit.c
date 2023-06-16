#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - print the last digit of the number
 * stored in the variable n
 *
 * Return: 0 success
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int num;

	num = n % 10;
	if ((num != 0) && (num < 6))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	else if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}

	return (0);
}
