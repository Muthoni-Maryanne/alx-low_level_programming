/* 0-read_textfile.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 *
 * @filename: pointer that holds string
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, and 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char *buf = malloc(letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (bytes_written);
}
