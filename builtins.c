/**
 * builtinschecker - checks if string is a built-in
 * @av: pointer to arguments
 * @buff: pointer to string
 * @exitstatus: execve exit status
 *
 * Return: 1 if buff is equal to env, 0 if not
 */
int builtinschecker(char **av, char *buff, int exitstatus)
{
  if (_strcmp(av[0], "environ") == 0)
  {
    _environ();
    free_args(av);
    free(buff);
    return (1);
  }
  else if (_strcmp(av[0], "exit") == 0)
  {
    free_args(av);
    free(buff);
    exit(exitstatus);
  } else
  {
    return (0);
  }
}
/**
 * free_args - free arg
 *
 * @av : argument to be freed
 *
 * return: void
*/

void free_args(char **av)
{
  int i;
  for (i = 0; av[i]; i++)
  {
    free(av[i]);
  }
  free(av);
}
