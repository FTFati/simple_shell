#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define delim " \t\r\n\a\""

char *_strcpy(char *dest, char *src);
void execute(char **av);
void shell_cd(char **args);
int shell_env(void);
void shell_exit(char **args);
int shell_setenv(char **args);
int shell_unsetenv(char **args);

#endif
