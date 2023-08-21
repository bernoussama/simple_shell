#include "shell.h"

/**
 * main  - simple shell program
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 if exited succesfuly 1 on error
 */
int main(int argc, char **argv)
{
	char *prog_name;
	char *sign;
	ssize_t nread;
	char *line = NULL;
	size_t len = 0;


	if (argc > TOKEN_NUM)
		return (1);

	prog_name = argv[0];
	sign = "$ ";

	prompt(sign);

	/* get arguments typed before hitting enter */
	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		run_shell(prog_name, sign, line, nread);
	}
	free(line);

	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
