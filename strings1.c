#include "shell.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: string parameter input
 *
 * Return: str int
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if true or 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
