#include "Shell.h"
/**
 * execute - function that execute command
 * @av: argument
 * Return: Void
 */
void execute(char **av)
{
	char *command = NULL;

	if (av)
	{
		command = av[0];
		if (execve(command, av, NULL) == -1)
			perror("Error: execve");
	}
}
