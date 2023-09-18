#include "Shell.h"

/**
 * exit_shell - Exit the shell
 * @args: Array of arguments
 *
 * Return: Always returns 0
 */
int exit_shell(char **args)
{
	int status = 0;

	if (args[1])
		status = _atoi(args[1]);

	free(args);
	exit(status);
}

/**
 * cd_shell - Change the current directory process
 * @args: Array of arguments
 *
 * Return: Always returns 1
 */
int cd_shell(char **args)
{
	char *dir = args[1];

	if (!dir)
		dir = _getenv("HOME");

	if (chdir(dir) == -1)
	{
		_puterror("cd: can't cd to ");
		return (1);
	}

	return (1);
}

/**
 * _env -prints the current environment
 * @env: array of environment variables
 *
 * Return: always returns 0
 */
int _env(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
		_puts(env[i]), _putchar('\n');

	return (0);
}
