#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <sys/stat.h>
#include <signal.h>
#include <stddef.h>
#include <errno.h>

/* FUNCTIONS */
void _puts(char *str);
int _putchar(char c);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);


#endif
