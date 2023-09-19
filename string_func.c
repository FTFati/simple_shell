#include "Shell.c"
/**
 * _strcmp - compares two strings
 * @ss1: pointer of first string
 * @ss2: pointer of second string
 * Return: integer
 */
int _strcmp(char *ss1. char *ss2)
{
	while (*ss1 != '\0' && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
	}
	return (*(unsigned char *)ss1 - *(unsigned char *)ss2);
}

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
