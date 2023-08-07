#include "main.h"
/**
 * create_file - creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successfull and -1 on err.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t desc = 0, count = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";

	desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (desc == -1)
		return (-1);

	while (text_content[i])
		i++;
	count = write(desc, text_content, i);
	if (count < 0)
		return (-1);

	close(desc);
	return (1);
}
