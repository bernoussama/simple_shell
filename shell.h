#ifndef SHELL_H
#define SHELL_H

#include <errno.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;

#define TOKEN_NUM 255

/**
 * struct PATH - path list struct
 * @dir: dir string
 * @next: next dir
 *
 */
typedef struct PATH
{
	char *dir;
	struct PATH *next;
} PATH_T;

/* string functions */
char *_strdup(char *str);
size_t _strlen(char *str);

/* UTILS */
void tokenize(char *str, char *array[]);
void prompt(char *sign);
void run_shell(char *prog_name, char *sign, char *line, size_t nread,
	       size_t lines, int *last_exit_code);
int execmd(char *prog_name, char **tokens);
ssize_t is_file(char *path);
ssize_t is_exec(char *path);
PATH_T *get_path_list(char *path);
char *_getenv(const char *var);
int compare_env(const char *env_str, const char *var);
char *concat(char *str1, char *str2);
void free_path_list(PATH_T *head);
ssize_t in_path(char *command, char **tokens);
void my_exit(int i);
size_t comp_str(char *str1, char *str2);
void _env(char **environ);
size_t is_whitespace(char c);
int print_d(int n);
void printerr(char *prog_name, size_t lines, char *command);

#endif
