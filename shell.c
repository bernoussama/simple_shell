#include "shell.h"
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	char *prog_name;
	ssize_t nread;
	char *line = NULL;
	size_t len = 0;

	pid_t pid;

	if (argc > TOKEN_NUM)
		return (1);

	prog_name = argv[0];

	prompt();

	/* get arguments typed before hitting enter */
	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		/*strtok array */
		char *array[TOKEN_NUM];
		/*strtok token */
		char *token = NULL;
		size_t i = 0;
		/* wait status */
		int status;

		if (nread == 0)
		{
			prompt();
		}
		else
		{
			/*remove the newline character from the end of line */
			line[nread - 1] = '\0';

			token = strtok(line, " ");
			while (token != NULL)
			{
				array[i] = token;
				token = strtok(NULL, " ");
				i++;
			}
			array[i] = NULL;

			pid = fork();
			if (pid == -1)
			{
				perror("Fork Error");
				return (1);
			}
			if (pid == 0)
			{
				if (execve(array[0], array, NULL))
				{
					/*! TODO: printf to remove
					 *  \todo printf to remove
					 */
					perror(prog_name);
					return (1);
				}
				return (0);
			}
			else
			{
				wait(&status);
			}
		}
		prompt();
	}

	printf("\n");
	free(line);

	return (0);
}
