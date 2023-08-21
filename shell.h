#ifndef _SHELL_H_
#define _SHELL_H_

#include <errno.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;

#define TOKEN_NUM 255

void tokenize(char *str, char *array[]);
void prompt(char *sign);
size_t _strlen(char *str);
void run_shell(char *prog_name, char *sign, char *line, size_t nread);
void execmd(char *prog_name, char **tokens);

#endif
