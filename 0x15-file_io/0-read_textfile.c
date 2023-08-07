#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file
* @letters: Number of letters it should read and print
* Return: Actual number of letters it could read and print
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc, n = -1;
	ssize_t words, wordCount;
	char *holder;

	if (!filename)
		return (0);
	desc = open(filename, O_RDONLY);
	if (desc == n)
		return (0);

	holder = malloc(sizeof(char) * letters);
	if (!holder)
	{
		close(desc);
		return (0);
	}

	words = read(desc, holder, letters);
	if (words == n)
	{
		free(holder);
		close(desc);
		return (0);
	}

	wordCount = write(STDOUT_FILENO, holder, words);
	if (wordCount == -n || wordCount != words)
	{
		free(holder);
		close(desc);
		return (0);
	}

	free(holder);
	close(desc);
	return (wordCount);
}
