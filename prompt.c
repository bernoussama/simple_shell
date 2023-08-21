#include "shell.h"
#include <unistd.h>

void prompt(void)
{
	int count;
	char *sign = "$ ";
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
