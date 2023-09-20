#include "Shell.h"
/**
 * tokenCmd - Functin that tokenise a string
 * @line: string
 * Return: pointer
*/
char **tokenCmd(char *line)
{
	char *buff = NULL;
	char **command = NULL;
	char *copy = NULL;
	int i = 0, j = 0;

	copy = _strdup(line);
	buff = strtok(line, delim);
	if (buff == NULL)
	{
		return (NULL);
		free(copy);
		free(line);
	}
	while (buff)
	{
		i++;
		buff = strtok(NULL, delim);
	}
	free(line);
	command = malloc(sizeof(char *) * (i + 1));
	buff = strtok(copy, delim);
	while (buff)
	{
		command[j] = _strdup(buff);
		buff = strtok(NULL, delim);
		j++;
	}
	command[j] = NULL;
	free(copy);
	return (command);
}
