#include "shell.h"

/**
 * comp_str - compare two strings
 *
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if identical 1 if not
 */
size_t comp_str(char *str1, char *str2)
{

	if (str1 == NULL || str2 == NULL)
	{
		return (1);
	}

	while (*str2 && *str1)
	{
		if (*str1 != *str2)
		{
			return (1);
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
