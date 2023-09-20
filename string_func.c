#include "Shell.h"

/**
 * _puts - prints a string
 * @str: pointer of a string
 * Return: none
 */
void _puts(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * free_tokens - free the tokens
 * @toks: tokens to be freed
 */
void free_tokens(char **toks)
{
	int count = 0;

	while (toks[count])
	{
		free(toks[count]);
		count++;
	}
}
