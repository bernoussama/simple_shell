#include "shell.h"

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
