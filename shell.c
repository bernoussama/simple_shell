#include "shell.h"
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	char *prog_name;
	ssize_t nread;
	char *line = NULL;
	size_t len = 0;
	int ac;

	pid_t my_pid;
	pid_t pid;

	ac = argc;
	prog_name = argv[0];

	/*! TODO: replace printf
	 *  \todo replace printf
	 */
	printf("$ ");

	/* get arguments typed before hitting enter */
	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		/*strtok array */
		char *array[nread];
		/*strtok token */
		char *token = NULL;
		size_t i = 0;
		/* wait status */
		int status;

		if (nread == 0)
		{
			printf("#CisTheDevil$ ");
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
				my_pid = getpid();
				if (execve(array[0], array, NULL))
				{
					/*! TODO: printf to remove
					 *  \todo printf to remove
					 */
					printf("Execution Error");
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
		printf("$ ");
	}

	printf("\n");
	free(line);

	return (0);
}
