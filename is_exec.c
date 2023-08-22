
#include "shell.h"

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
