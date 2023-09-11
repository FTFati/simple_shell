#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define delim " \t\r\n\a\""

char *_strcpy(char *dest, char *src);
void execute(char **av);
int execute_command(char **agv, char *buf);
void tokenizes(char *buff, char **tok);

#endif
