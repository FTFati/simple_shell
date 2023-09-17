#include "Shell.h"
/**
 * main - main program Simple shell
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *line;
	size_t n = 0;
	ssize_t n_cmd;
	char *token;
	int i = 0;

	while (1)
	{
		write(1, "$ ", 2);
		n_cmd = getline(&line, &n, stdin);
		if (n_cmd == -1)
			return (-1);
		if (line[n_cmd - 1] == '\n')
			line[n_cmd - 1] = '\0';
		token = strtok(line, "");
		for (i = 0; token != NULL; i++)
		{
			av[i] = token;
			token = strtok(NULL, "");
			i++;
		}
		av[i] = NULL;
		execute(av);
	}
	free(line);
	return (0);
}
