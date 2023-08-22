#include "shell.h"

/**
 * _env - prints the environ variables
 *
 * @environ: environ array of strings
 *
 * Return: void
 */
void _env(char **environ)
{
	size_t i, len;

	for (i = 0; environ[i] != NULL; i++)
	{

		len = _strlen(environ[i]);

		write(STDOUT_FILENO, environ[i], len);
		write(STDOUT_FILENO, "\n", 1);
	}
}
