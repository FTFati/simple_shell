#include "Shell.h"
/**
 * execute - function that execute command
 * @cmd: command argument
 * Return: Void
 */
void execute(char **cmd)
{
	char *command = NULL;
	pid_t pid;
	int status;

	if (cmd)
	{
		pid = fork();
		command = cmd[0];
		if (pid == -1)
		{
			perror("Error: fork");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			if (execve(command, cmd, NULL) == -1)
			{
				perror("Error: execve");
				exit(EXIT_FAILURE);
			}
		}
		else
			waitpid(pid, &status, 0);
	}
}
