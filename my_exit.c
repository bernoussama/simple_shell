#include "shell.h"
#include <unistd.h>

/**
 * my_exit - exit builtin
 *
 * @i: return code
 *
 * Return: void
 */
void my_exit(int i)
{
	exit(i);
}
