#include "Shell.h"
/**
 * *_getCommand - Function that gets a command from user
 * Return: pointer to command
 */
char *_getCommand(void)
{
	size_t num_chars = 0;
	char *chars = NULL;
	int n;

	if (isatty(STDIN_FILENO) == 1)
		write(1, "$ ", 2);
	n = getline(&chars, &num_chars, stdin);
	if (n == -1)
	{
		free(chars);
		return (NULL);
	}
	return (chars);
}
