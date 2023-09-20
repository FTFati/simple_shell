#include "Shell.h"
/**
 * _exxit - Function that exists the shell
 *@toks: tokens
 *@buff: buffer
 * Return: int
 */
int _exxit(char **toks, char *buff)
{
	int count = 0;
	int status = 0;

	while (toks[count])
		count++;
	if (count == 1)
	{
		freeBuff(toks);
		free(buff);
		exit(0);
	}
	if (_atoi(toks[1]) == -1)
	{
		fprintf(stderr, "./hsh: 1: exit: Illegal number: %s\n", toks[1]);
		return (2);
	}
	status = _atoi(toks[1]);
	freeBuff(toks);
	free(buff);
	exit(status);
}
