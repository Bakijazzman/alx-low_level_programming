#include <stdio.h>
/**
 * main - counts and prints the number of arguement
 * @argc: the arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
