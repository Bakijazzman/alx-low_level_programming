#include <stdio.h>
/**
 * main - fizz buzz challenge
 * Return: 0 success
 */
int main(void)
{
	int i, j;

	j = 100;
	for (i = 1; i <= j; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
	printf("\n");
	}

	return (0);
}
