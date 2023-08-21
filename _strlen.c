#include "shell.h"

/**
 * _strlen - returns the length of a given string
 *
 * @str: the string to get its length
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t len;

	len = 0;

	if (!str)
	{
		return (len);
	}

	while (*(str++) != '\0')
	{
		len++;
	}

	return (len);
}
