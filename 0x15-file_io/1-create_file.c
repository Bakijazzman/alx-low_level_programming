#include "main.h"

/**
* create_file - Function that creates a file
* @filename: Name of the file to create
* @text_content: A NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	ssize_t wordCount;
	int n = -1, desc;
	size_t i;

	if (!filename)
		return (n);

	desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (desc == n)
		return (n);

	for (i = 0; text_content[i] != '\0'; i++)
	
	wordCount = write(desc, text_content, i);
	if (wordCount == n || (size_t)wordCount != i)
	{
		close(desc);
		return (n);
	}
	close(desc);
	return (1);
}
