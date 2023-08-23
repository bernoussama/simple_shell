#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string
 *
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len, i;

	if (!str)
		return (NULL);

	/* get length of str '\0' not included */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new_str = (char *)malloc((len + 1));
	if (!new_str)
	{
		free(new_str);
		return (NULL);
	}

	/* copy str content to new_str including '\0' */
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';

	return (new_str);
}
