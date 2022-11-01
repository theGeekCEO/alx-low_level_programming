#include "main.h"

/**
*create_file - function that creates a file.
*@filename: name of the file
*@text_content: content of the new file
*Return: returns 1 on success or -1 if fails
*/


int create_file(const char *filename, char *text_content)
{
	int fd, j, i = 1;

	if (!filename)
		i = 1;
	fd = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);

	if (fd == -1)
		i = -1;
	if (!text_content)
		text_content = "";
	j = write(fd, text_content, strlen(text_content));
	if (j == -1)
		i = -1;
	close(fd);
	return (i);
}

