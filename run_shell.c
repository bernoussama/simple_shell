#include "shell.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * run_shell - run the shell
 *
 * @prog_name: the programe name
 * @sign: the prompt sign
 * @line: the command line
 * @nread: chars read by getline
 * @lines: lines run
 * @last_exit_code: lines run
 *
 * Return: void
 */
void run_shell(char *prog_name, char *sign, char *line, size_t nread,
	       size_t lines, int last_exit_code)
{
	/*tokens array */
	char *tokens[TOKEN_NUM];
	char *command;
	ssize_t is_f;

	if (nread == 0)
		prompt(sign);
	else
	{
		/*remove the newline character from the end of line */
		line[nread - 1] = '\0';

		tokenize(line, tokens);
		command = tokens[0];
		is_f = is_exec(command);
		if (!command || is_whitespace(*command))
			;
		else if (comp_str(command, "exit") == 0)
		{
			free(line);
			my_exit(last_exit_code);
		}
		else if (comp_str(command, "env") == 0)
		{
			_env(environ);
			last_exit_code = 0;
		}
		else if (is_f == 1)
		{
			last_exit_code = execmd(prog_name, tokens);
		}
		else if (in_path(command, tokens) == 1)
		{
			execmd(prog_name, tokens);
			free(tokens[0]);
		}
		else
			printerr(prog_name, lines, command);
	}
	prompt(sign);
}
