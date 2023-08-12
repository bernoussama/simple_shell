#include "shell.h"
/**
 * _puts - prints a string followed by a new line
 * @str: The string to print
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
/**
 * _putchar - prints a character
 * @c: character to print
 *
 * Return: return value of write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
