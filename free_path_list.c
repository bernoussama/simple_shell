#include "shell.h"

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

