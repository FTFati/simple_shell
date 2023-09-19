#include "Shell.h"
/**
 * sh_exit - Exit the shell
 * @toks: token
 *@buff: buffer
 * Return: integer
 */
int sh_exit(char **toks, char *buff)
{
	int counter = 0;
	int es = 0;

	while (toks[counter])
	{
		counter++;
	}
	if (counter == 1)
	{
	      free_tokens(toks);
	      free(buff);
	      exit(0);
	}
        if (_atoi(toks[1]) == -1)
        {
              fprintf(stderr, "./hsh: 1: exit: Illegal number: %&n", toks[1]);
              return (2);
	}
        es = atoi(toks[1]);
        free_tokens(toks);
        free(buff);
        exit(es);
}
