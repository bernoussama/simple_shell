#include "shell.h"

/**
 * compare_env - checks if string is an env variable
 * @env_str: the env variable
 * @var: the string variable to check
 *
 * Description: Longer description of the function)?
 *
 * Return: 0 if true 1 if false
 */
int compare_env(const char *env_str, const char *var)
{

	if (env_str == NULL || var == NULL)
	{
		return (1);
	}

	while (*var && *env_str)
	{
		if (*env_str != *var)
		{
			return (1);
		}
		env_str++;
		var++;
	}
	if (*var == '\0')
	{
		return (0);
	}
	else
	{
	return (1);
	}
}
