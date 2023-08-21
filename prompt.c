#include "shell.h"

/**
 * prompt - shows the prompt
 * @sign: sign to show as prompt
 *
 *
 * Return: void
 */
void prompt(char *sign)
{
	int count;
	size_t n = _strlen(sign);

	if (isatty(STDIN_FILENO) == 1)
	{
		count = write(STDOUT_FILENO, sign, n);
		if (count == -1)
		{
			exit(errno);
		}
	}
}
