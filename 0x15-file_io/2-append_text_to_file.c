#include "main.h"

/**
* append_text_to_file - Function that appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, n = -1;
	ssize_t wordCount;
	size_t i = 0;

	if (!filename)
		return (n);

	desc = open(filename, O_WRONLY | O_APPEND);
	if (desc == n)
		return (n);

	if (text_content)
	{
		while (text_content[i] != '\0')
		i++;

		wordCount = write(desc, text_content, i);
		if (wordCount == n || (size_t)wordCount != i)
		{
			close(desc);
			return (n);
		}
	}
	else
	{
		if (access(filename, W_OK) == -1)
		{
			close(desc);
			return (n);
		}
	}

	close(desc);
	return (1);
}
