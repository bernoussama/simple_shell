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

void tokenize(char *str, char **array[]);
void prompt(void);
size_t _strlen(char *str);

#endif
