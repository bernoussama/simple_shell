#include "shell.h"

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
