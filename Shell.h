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
int execute_command(char **agv, char *buf);
void tokenizes(char *buff, char **tok);
char *_env(char *n);
char *get_command(char *cmd);
ssize_t _getline(char **line, size_t *buffsize, FILE *stream);
char *get_command(char *cmd);
int _builtin(char **toks, char *buff);
int exit_sh(char **toks, char *buff);
void _puts(char *str);
int _atoi(char *ptr);

#endif
