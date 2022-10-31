#include "main.h"
/**
  * append_text_to_file - appends a string to an existing file
  * @filename: name of file
  * @text_content: string to be appended to file
  * Return: 1 on success. -1 if there is failure/error
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, c, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	w = write(fd, text_content, len);
	if ((w == -1) || (w != len))
		return (-1);
	c = close(fd);
	if (c == -1)
		return (-1);
	return (1);
}
