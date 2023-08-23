#include "shell.h"
#include <unistd.h>

/**
 * is_file - checks if the path is of a file
 * @path: the path to check
 *
 * Description: Longer description of the function
 *
 * Return: Description of the returned value
 */
ssize_t is_file(char *path)
{
	struct stat sb;
	ssize_t ret;

	ret = stat(path, &sb);
	if (ret == 0)
		return (1);

	else if (ret == -1)
		return (-1);

	return (0);
}
