#include "main.h"

/**
  * read_textfile - reads characters from a textfile
  * and prints to POSIX standard output
  * @filename: name of text file
  * @letters: number of characters to be read and printed
  * Return: actual number of characters read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, r, w, c, fd, num_ch;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc((letters + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, str, letters);
	if (r == -1)
		return (0);
	str[letters] = '\0';
	num_ch = 0;
	for (i = 0; str[i] != '\0'; i++)
		num_ch++;
	c = close(fd);
	if (c == -1)
		return (0);
	w = write(STDOUT_FILENO, str, num_ch);
	if (w == -1)
		return (0);
	if (w != num_ch)
		return (0);
	free(str);
	return (num_ch);
}
