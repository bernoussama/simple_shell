#include "shell.h"

/**
 * concat - concatenate 2 strings to a new one
 *
 * @str1: first string
 * @str2: second string
 *
 * Return: concatenated string (to be freed!!)
 */
char *concat(char *str1, char *str2)
{
	char *concatd;
	size_t i, j;

	if (!str1 || !str2)
	{
		return (NULL);
	}

	concatd = malloc(_strlen(str1) + _strlen(str2) + 1);
	if (!concatd)
	{
		free(concatd);
		return (NULL);
	}
	for (i = 0; str1[i] != '\0'; i++)
	{
		concatd[i] = str1[0];
	}

	for (j = 0; str2[j] != '\0'; j++, i++)
	{
		concatd[i] = str2[j];
	}
	concatd[i] = '\0';

	return (concatd);
}
