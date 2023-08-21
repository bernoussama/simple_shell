#include "shell.h"
#include <stddef.h>

void tokenize(char *str, char **array[])
{
    char *token;
    size_t i;

	token = strtok(str, " ");
	while (token != NULL)
	{
		*array[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	*array[i] = NULL;
}
