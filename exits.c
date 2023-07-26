#include "main.h"

/**
 * exit_shell - function that exits the shell
 * @buffer: is a character type
 * return: void
 */

void exit_shell(char *buffer)
{
	if (_strcmp(buffer, "exit\n") == 0)
	{
		free(buffer);
		exit(1);
	}
}
