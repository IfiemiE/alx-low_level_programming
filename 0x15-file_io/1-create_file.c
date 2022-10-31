#include "main.h"
/**
  * create_file - creates a file and writes a string to it
  * @filename: name of file
  * @text_content: the string to write on the file
  * Return: 1, if successful. -1, if there is error/failure
  */
int create_file(const char *filename, char *text_content)
{
	int i, c, w, fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		len++;
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	if (w != len)
		return (-1);
	c = close(fd);
	if (c == -1)
		return (-1);
	return (1);
}
