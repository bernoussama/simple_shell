#include "shell.h"
#include <stdlib.h>

/**
 * get_path_list - makes a path linked list
 *
 * @path: path env variable string
 *
 * Return: head of the path list
 */
PATH_T *get_path_list(char *path)
{
	PATH_T *head, *tmp;
	char *token;

	if (!path)
		return (NULL);
	head = NULL;
	tmp = NULL;
	head = malloc(sizeof(PATH_T));
	if (!head)
	{
		free(head);
		return (NULL);
	}
	if (!head)
		return (NULL);
	token = strtok(path + 5, ":");
	head->dir = _strdup(token);
	tmp = (PATH_T *)head;
	token = strtok(NULL, ":");
	while (token != NULL)
	{
		(tmp)->next = malloc(sizeof(PATH_T));
		if (!(tmp)->next)
		{
			free(tmp->next);
			return (NULL);
		}
		(tmp) = (tmp)->next;
		(tmp)->dir = _strdup(token);
		token = strtok(NULL, ":");
	}
	(tmp)->next = NULL;
	return (head);
}
