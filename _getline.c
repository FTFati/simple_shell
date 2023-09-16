#include "Shell.h"

/**
 * _getline - Function that gets a line from user/file
 * @line: Pointer to store the line
 * @buffsize: Size of the buffer
 * @fd: File descriptor
 * Return: Number of characters read, -1 on failure.
 */

ssize_t _getline(char **line, size_t *buffsize, int fd)
{
	ssize_t num_chars = 0;

	if (line == NULL || buffsize == NULL)
		return (-1);
	if (*line == NULL)
	{
		*line = malloc(sizeof(char) * MAX_INPUT_SIZE);
		if (*line == NULL)
			return (-1);
		*buffsize = MAX_INPUT_SIZE;
	}
	num_chars = read(fd, *line, *buffsize);
	if (num_chars == -1)
	{
		free(*line);
		return (-1);
	}
	return (num_chars);
}
