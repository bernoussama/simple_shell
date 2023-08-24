
#include "shell.h"
#include <stdio.h>

/**
 * is_exec - checks if file is executable
 *
 * @path: path of the file
 *
 * Return: 1 if file is executable 0 if not
 */
ssize_t is_exec(char *path)
{

	if (is_file(path) == 1)
	{
		if (access(path, X_OK) == 0)
		{
			return (1);
		}
	}
	return (0);
}
