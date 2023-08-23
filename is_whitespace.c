#include "shell.h"

/**
 * is_whitespace - checks if char is whitespace
 * @c : char to check
 *
 *
 * Return: 1 if whitespace 0 if not
 */
size_t is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f' ||
	    c == '\v')
		return (1);
	else
		return (0);
}
