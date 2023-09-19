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
