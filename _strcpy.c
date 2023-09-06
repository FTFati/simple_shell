#include "Shell.h"
/**
 * *_strncpy - function that copies a string
 * @dest: the destination string to be copied to
 * @src: the source strin
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
