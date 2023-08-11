#include "main.h"

/**
 * _whitespace - check if the character is a whitespace
 * @c: character to check
 *
 * Return: 1 if a whitespace,0 if not
 */
int _whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f' || c == '\v')
  {
		return (1);
  }
	else
  {
		return (0);
  }
}
