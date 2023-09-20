#include "Shell.h"

/**
*_strcat - function that concatenates two strings.
*@go: pointer to destination string.
*@sr: pointer to source string.
*
*Return: pointer to the resulting string
 */
char *_strcat(char *go, char *sr)
{
	int length, i;

	length = 0;
	while (go[length] != '\0')
	{
		length++;
	}
	for (i = 0; sr[i] != '\0'; i++, length++)
	{
		go[length] = sr[i];
	}
	go[length] = '\0';
	return (go);
}
