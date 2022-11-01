#include "main.h"
/**
  * print_errormessg - prints error messages
  * @filename: file name associated with error
  * @fd: file descriptor of the file
  * @ch: character indicating type of error
  * Return: void
  */
void print_errormessg(char *filename, int fd, char ch)
{
	switch (ch)
	{
		case 'r':
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		case 'w':
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		case 'c':
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
	}
}

/**
  * main - copies file content from one file
  * to another
  * @argc: number of arguments
  * @argv: an array of string input arguments
  * Return: 0 for success exit.
  * and 97, 98, 99, 100 for several error types
  */
int main(int argc, char *argv[])
{
	char *file_src, *file_dest, buffer[1024];
	int fd_src, fd_dest, r, w, c;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_src = argv[1];
	file_dest = argv[2];
	fd_src = open(file_src, O_RDONLY);
	if (fd_src == -1)
		print_errormessg(file_src, fd_src, 'r');
	fd_dest = creat(file_dest, 0664);
	if (fd_dest == -1)
		print_errormessg(file_dest, fd_dest, 'w');
	do {
		r = read(fd_src, buffer, 1024);
		if (r == -1)
			print_errormessg(file_src, fd_src, 'r');
		w = write(fd_dest, buffer, r);
		if (w == -1)
			print_errormessg(file_dest, fd_dest, 'w');
	} while (r > 0);
	c = close(fd_src);
	if (c == -1)
		print_errormessg(file_src, fd_src, 'c');
	c = close(fd_dest);
	if (c == -1)
		print_errormessg(file_dest, fd_dest, 'c');
	return (0);
}
