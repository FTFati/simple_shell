#include "Shell.h"

/**
 * _strdup - a function that duplicate a string
 * @str: a string
 * Return: pointer
 */
char *_strdup(const char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}

/**
  * _strcmp - a function that compares two strings
  * @s1: first string
  * @s2: second string
  * Return: 0 or > 0 or < 0
  */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}

/**
  * _strlen - a function that returns the length of a string
  * @s: string
  * Return: the lenght of the string
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
  * _strcat - a function that concatenates two strings
  * @src: first string
  * @dest: second string
  * Return: concatente string
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

/**
 *_strcpy - function that copies the string
 *@dest: first string
 *@src: second string
 *Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
