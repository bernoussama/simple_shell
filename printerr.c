#include "shell.h"
#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * printerr - print error message
 *
 * @prog_name: name of the program
 * @lines : lines run
 * @command : the invalidd command
 *
 * Return: void
 */
void printerr(char *prog_name, size_t lines, char *command)
{
	char *error_prefix = ": ";
	char *error_separator = ": ";
	char *error_msg = "not found";
	char *error_suffix = "\n";

	write(STDERR_FILENO, prog_name, _strlen(prog_name));
	write(STDERR_FILENO, error_prefix, _strlen(error_prefix));
	print_d(lines);
	write(STDERR_FILENO, error_separator, _strlen(error_separator));
	write(STDERR_FILENO, command, _strlen(command));
	write(STDERR_FILENO, error_separator, _strlen(error_separator));
	write(STDERR_FILENO, error_msg, _strlen(error_msg));
	write(STDERR_FILENO, error_suffix, _strlen(error_suffix));
}

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) { return (write(2, &c, 1)); }

/**
 * print_d - print digits
 *
 * @n: the number to print
 *
 * Return: Description of the returned value
 */
int print_d(int n)
{
	int digits[30];
	int i, j, written;
	int skip_zeros;

	i = 0;
	written = 0;

	if (n == 0)
	{
		written += _putchar('0');
		return (written);
	}
	else if (n == INT_MIN)
	{

		digits[i] = -(n % 10);
		n /= 10;
		i++;
	}

	if (n < 0)
	{
		written += _putchar('-');
		n *= -1;
	}

	while (n != 0)
	{
		digits[i] = n % 10;
		n /= 10;
		i++;
	}

	skip_zeros = 1;
	for (j = i - 1; j >= 0; j--)
	{
		if (digits[j] != 0)
			skip_zeros = 0;

		if (!skip_zeros)
			written += _putchar(digits[j] + '0');
	}

	return (written);
}
