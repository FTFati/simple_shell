#include "Shell.h"
/**
 * *_env - Function that gets an environment
 * @args: argument
 * Return: env
*/
char *_env(char *args)
{
	char *sign;
	char *tmp;
	char *env1;
	int i;

	for (i = 0; environ[i]; i++)
	{
		tmp = _strdup(environ[i]);
		sign = strtok(tmp, "=");
		if (_strcmp(sign, args) == 0)
		{
			env1 = _strdup(strtok(NULL, "\n"));
			free(tmp);
			return (env1);
		}
		free(tmp);
	}

	return (NULL);
}
