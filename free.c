#include "Shell.h"
/**
 * freeBuff - Function that frees the buffer
 * @buff: array
 * Return: Void
*/
void freeBuff(char **buff)
{
	int i;

	if (!buff)
		return;
	for (i = 0; buff[i]; i++)
	{
		free(buff[i]);
		buff[i] = NULL;
	}
	free(buff);
	buff = NULL;
}
