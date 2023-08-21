#include "shell.h"


/**
 * execmd - execute a command
 *
 * @prog_name: program name
 * @tokens: command tokens
 *
 * Return: void
 */
void execmd(char *prog_name, char **tokens)
{
	pid_t pid;
	/* wait status */
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("Fork Error");
		exit(1);
	}
	if (pid == 0)
	{
		if (execve(tokens[0], tokens, NULL))
		{
			perror(prog_name);
			exit(1);
		}
		exit(0);
	}
	else
	{
		wait(&status);
	}
}
