#include "Shell.h"
/**
 * main - main program Simple shell
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *line, *line2 = NULL;
	size_t n = 0;
	ssize_t n_cmd;
	int num_tokens = 0, i;
	char *buff;

	while (1)
	{
		write(1, "$ ", 2);
		n_cmd = getline(&line, &n, stdin);
		if (n_cmd == -1)
			return (-1);
		line2 = malloc(sizeof(char) * n_cmd);
		if (line2 == NULL)
		{
			perror("Error: memory allocation error");
			return (-1);
		}
		_strcpy(line2, line);
		buff = strtok(line, delim);
		while (buff != NULL)
		{
			num_tokens++;
			buff = strtok(NULL, delim);
		}
		num_tokens++;
		av = malloc(sizeof(char *) * num_tokens);
		buff = strtok(line2, delim);
		for (i = 0; buff != NULL; i++)
		{
			av[i] = malloc(sizeof(char) * strlen(buff));
			_strcpy(av[i], buff);
			buff = strtok(NULL, delim);
		}
		av[i] = NULL;
		printf("%s\n", line);
		free(line);
	}
	return (0);
}
