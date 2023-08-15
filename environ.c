#include "shell.h"
/**
 * _environ - a function that prints the environ
 *
 * Return: 0.
 */
void _environ(void)
{
	char **env = environ;

	while (*env)
	{
		_puts(*env);
		env++;
	}
}
