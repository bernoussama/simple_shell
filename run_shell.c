#include "shell.h"

/**
 * run_shell - run the shell
 *
 * @prog_name: the programe name
 * @sign: the prompt sign
 * @line: the command line
 * @nread: chars read by getline
 *
 * Return: void
 */
void run_shell(char *prog_name, char *sign, char *line, size_t nread)
{

	/*tokens array */
	char *tokens[TOKEN_NUM];


	if (nread == 0)
	{
		prompt(sign);
	}
	else
	{
		/*remove the newline character from the end of line */
		line[nread - 1] = '\0';

		tokenize(line, tokens);

		execmd(prog_name, tokens);
	}
	prompt(sign);
}
