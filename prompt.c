#include "shell.h"
/**
 * prompt - displays the prompt
 *
 * Return: Always 0 (success)
 */
int prompt(void)
{
	ssize_t count = 0;
	char *sign = "$ ";

	if (isatty(STDIN_FILENO) == 1)
	{
		count = write(STDOUT_FILENO, sign, 2);
		if (count == -1)
			exit(0);
	}

	return (0);
}
