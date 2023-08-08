#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	check_IO_stat(fd_from, -1, argv[1], 'O');

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_IO_stat(fd_to, -1, argv[2], 'W');

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || write_count != read_count)
		{
			check_IO_stat(-1, fd_to, argv[2], 'W');
		}
	}

	if (read_count == -1)
	{
		check_IO_stat(-1, fd_from, argv[1], 'O');
	}

	if (close(fd_from) == -1)
	{
		check_IO_stat(-1, fd_from, NULL, 'C');
	}

	if (close(fd_to) == -1)
	{
		check_IO_stat(-1, fd_to, NULL, 'C');
	}

	return (0);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: status value returned from the open, read, or write call
 * @fd: file descriptor of the file to be closed
 * @filename: name of the file
 * @mode: opening, reading, or writing
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
