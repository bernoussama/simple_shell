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
int prompt(void);
int _whitespace(char c);

/* MORE FUNCTIONS */
void _puts(char *str);
int _putchar(char c);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char *_memset(char *s, char b, unsigned int n);

/* TOKENIZE FUNCTIONS */
int _splitter(char *s);
int _cmpath(const char *str1, const char *str2);

/* STRINGS FUNCTIONS */
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);


#endif
