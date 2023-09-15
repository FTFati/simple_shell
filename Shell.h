#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define delim " \t\r\n\a\""
#define MAX_INPUT_SIZE 1024
#define MAX_TOKENS 100

char *_strcpy(char *dest, char *src);
void execute(char *cmd);
/*ssize_t _getline(char **ln, size_t *bufsize, int fd)*/

#endif
