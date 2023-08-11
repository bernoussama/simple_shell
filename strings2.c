#include "shell.h"
/**
 * _strdup - it duplicates a string
 * @str: The pointer to string to duplicate
 *
 * Return: The pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup_str;
	int length;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	dup_str = malloc(sizeof(char) * (length + 1));
	if (dup_str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
	{
		dup_str[length] = str[length];
	}
	dup_str[length] = '\0';
	return (dup_str);
}
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
/**
 * *_strcpy - copies the string pointed to by src to dest.
 * @dest: buffer
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
