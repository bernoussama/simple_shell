#include "shell.h"

/**
 * free_path_list - free the path list
 *
 * @head: head of the list
 *
 * Return: void
 */
void free_path_list(PATH_T *head)
{
	PATH_T *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = (PATH_T *)head;
		head = head->next;
		free(tmp->dir);
		free(tmp);
	}
}
