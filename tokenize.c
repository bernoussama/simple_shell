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
