#include "Shell.h"
/**
 * main - main program Simple shell
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */
int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
	char *line;
	size_t n = 0;
	ssize_t n_cmd;

	while (1)
	{
		write(1, "$ ", 2);
		n_cmd = getline(&line, &n, stdin);
		if (n_cmd == -1)
			return (-1);
		if (line[n_cmd - 1] == '\n')
			line[n_cmd - 1] = '\0';
		execute(line);
	}
	free(line);
	return (0);
}
