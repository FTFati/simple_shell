#include "Shell.h"
/**
 * _builtin - Function that handls the builtin commands
 * @toks: tokens
 * @buff: buffer
 * Return: env
*/
int _builtin(char **toks, char *buff)
{
	if (_strcmp(toks[0], "env") == 0)
	{
		return (env1());
	}
	else if (_strcmp(toks[0], "exit") == 0)
	{
		return (exit_sh(toks, buff));
	}
	else
	{
		return (-1);
	}
}
/**
 * env1 - Function that gets the env
 * Return: 0
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
