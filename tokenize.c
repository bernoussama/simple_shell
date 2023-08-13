/**
 * _splitter - counts the number of paths in PATH
 * @s: pointer to PATH string
 *
 * Return: number of directories to check in PATH
 */
int _splitter(char *s)
{
  int i, count = 0;
  for (i = 0; s[i]; i++)
  {
    if (s[i] != ':' && (i == 0 || s[i - 1] != ':'))
	{
      count++;
    }
  }
  return (count);
}
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
