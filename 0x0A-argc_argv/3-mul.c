#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies arguements recieved
 * @argc: the counts of the arguements
 * @argv: the value of the arguement
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	if (argc !=  3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%i\n", result);
	}
	return (1);
}
