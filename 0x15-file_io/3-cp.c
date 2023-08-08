#include "main.h"

#define BUF_SIZE 1024
/**
 * error_check - checks if files can be opened.
 * @old: file_from.
 * @new: file_to.
 * @argv: arguments.
 * Return: no return.
 */
void error_check(int old, int new, char *argv[])
{
	int n = -1;

	if (old == n)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (new == n)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int old, new, err_check, n = -1;
	ssize_t words, wrdCount = 0;
	char hold[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	old = open(argv[1], O_RDONLY);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_check(old, new, argv);

	words = BUF_SIZE;
	while (words == BUF_SIZE)
	{
		words = read(old, hold, BUF_SIZE);
		if (words == n)
			error_check(n, 0, argv);

		wrdCount = write(new, hold, words);
		if (wrdCount == n)
			error_check(0, -1, argv);
	}

	err_check = close(old);
	if (err_check == n)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", old);
		exit(100);
	}

	err_check = close(new);
	if (err_check == n)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", old);
		exit(100);
	}
	return (0);
}
