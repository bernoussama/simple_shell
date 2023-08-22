#include "shell.h"

char *_getenv(const char *var)
{
	char **env = environ;
	char *thevar = NULL;
	while (*env)
	{
		if (compare_env(*env, var) == 0)
		{
			thevar = _strdup(*env);
			break;
		}
		env++;
	}

	return (thevar ? thevar : NULL);
}
