#include "Shell.h"
/**
 * execute - function that execute command
 * @cmd: command argument
 * Return: Void
 */
void execute(char *cmd)
{
	char *command = NULL;
	char *buff[10];
	pid_t pid;
	int status;

	if (cmd)
	{
		pid = fork();
		command = cmd;
		if (pid == -1)
		{
			perror("Error: fork");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			buff[0] = command;
			buff[1] = NULL;
			if (execve(buff[0], buff, NULL) == -1)
			{
				perror("Error: execve");
				exit(EXIT_FAILURE);
			}
		}
		else
			waitpid(pid, &status, 0);
	}
}
