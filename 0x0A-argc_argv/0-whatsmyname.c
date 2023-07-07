#include <stdio.h>
/**
 * main - prints the name of a program
 * @argc: counts each agurment
 * @argv: prints each aguement
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
