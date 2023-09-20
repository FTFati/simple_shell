#include "Shell.h"
/**
 * main - main program Simple shell
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *line = NULL;
	char **cmd = NULL;
	int status = 0;

	while (1)
	{
		line = _getCommand();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "\n", 1);
			return (status);
		}
		cmd = tokenCmd(line);
		if (cmd == NULL)
			continue;
		status = execute(cmd, av);
	}
	return (0);
}
