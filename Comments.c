#include "Shell.h"
/**
 * Comments - Function that handle shell comments (#)
 * @cmd: command
 * Return: Void
*/
void Comments(char ***cmd)
{
	int i;
	int sign = 0;

	if (!(*cmd))
		return;

	for (i = 0; (*cmd)[i]; i++)
	{
		if ((*cmd)[i][0] == '#')
		{
			sign = 1;
			break;
		}
	}
	if (sign)
	{
		while ((*cmd)[i])
		{
			free((*cmd)[i]);
			i++;
		}
	}
	if (!(*cmd)[0])
		free((*cmd));
}
