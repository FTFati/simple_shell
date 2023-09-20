#include "Shell.h"
/**
 * execute - function that execute command
 * @cmd: command argument
 * Return: Void
 */
void execute(char *cmd)
{
	char *command[2];
	pid_t pid;
	int status;

	if (cmd)
	{
		pid = fork();
		command[0] = cmd;
		command[1] = NULL;
		if (pid == -1)
		{
			perror("Error: fork");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			if (execve(cmd, command, NULL) == -1)
			{
				perror("Error: execve");
				exit(EXIT_FAILURE);
			}
		}
		else
			waitpid(pid, &status, 0);
	}
}
