#include "shell.h"
#include <stddef.h>

/**
 * tokenize - break line into tokens
 * @str: string to be tokenized
 * @array: array to be populated with tokens
 *
 * Return: void
 */
void tokenize(char *str, char *array[])
{
	char *token;
	size_t i;

	i = 0;

	token = strtok(str, " ");
	while (token != NULL)
	{
		array[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	array[i] = NULL;
}
