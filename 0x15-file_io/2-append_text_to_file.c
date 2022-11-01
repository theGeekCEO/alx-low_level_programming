#include "main.h"

/**
*append_text_to_file - function that appends text at the end of a file.
*@filename: name of the file
*@text_content: content to append to the file
*Return: Returns 1 if success and -1 if fails
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 1;

	if (!filename)
		return (-1);
	else if (!text_content || strlen(text_content) < 1)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	i = write(fd, text_content, strlen(text_content));
	if (i == -1)
		return (-1);
	close(fd);
	return (1);

}
