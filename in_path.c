#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * in_path - checks if command is in path
 *
 * @command: command string
 * @tokens: tokens array
 *
 * Return:  1 if command in path 0 if not
 */
ssize_t in_path(char *command, char **tokens)
{
	char *abs_path;
	PATH_T *path_list;
	PATH_T *tmp;
	char *path;

	path = _getenv("PATH");

	path_list = get_path_list(path);

	/* for dir in path concat command to dir into abs_path */
	for (tmp = path_list; tmp; tmp = tmp->next)
	{
		abs_path = concat(tmp->dir, command);
		/* check if abs_path is executable */
		if (is_exec(abs_path))
		{
			tokens[0] = _strdup(abs_path);
			free_path_list(path_list);
			free(abs_path);
			free(path);
			return (1);
		}
		free(abs_path);
	}

	free_path_list(path_list);
	free(path);
	return (0);
}
