#include "shell.h"
/**
 * _cmpath - finds the value of PATH in environ
 * @str1: pointer to "PATH"
 * @str2: pointer to environ string
 *
 * Return: 0 on success || +1 if no PATH variable in environ
 */
int _cmpath(const char *str1, const char *str2)
{
  int i = 0;
  while (str2[i] != '=')
  {
    if (str1[i] != str2[i])
	{
      return -1;
    }
    i++;
  }
  return 0;
}
/**
 * _cmpcat - concatenates 3 str to create a full PATH
 * @str: static array to save the result of the concatenation
 * @av: pointer to command string entered by USER
 * @token: pointer to 1st part of a directory in PATH
 *
 * Return: pointer to the complete path to the command
 */

char *_cmpcat(char *str, char **av, char *token)
{
	int len, len1, len2;

	_memset(str, 0, 256);
	len1 = _strlen(token);
	len2 = _strlen(av[0]);
	len = len1 + len2 + 2;
	_strcat(str, token);
	_strcat(str, "/");
	_strcat(str, av[0]);
	str[len - 1] = '\0';

	return (str);
}
