#include "Shell.h"

/**
 * _builtin - handles the bultin commands
 * @toks: token
 * @buff: buffer
 * Return: Conditional Statements
 */
int _builtin(char **toks, char *buff)
{
	if (_strcmp(toks[0], "env") == 0)
	{
		return (env1());
	}
	else if (_strcmp(toks[0], "exit") == 0)
	{
		return (sh_exit(toks, buff));
	}
	else
	{
		return (-1);
	}
}
/**
 * env1 - gets the env
 * Return: always returns 0
 */
int env1(void)
{
	int co;

	for (co = 0; environ[co]; co++)
	{
		_puts(environ[co]);
	}
        return (0);
}
