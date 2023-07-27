#include "main.h"

/**
 * empty - Checks if a line exits or not
 * @buffer: the line to be checked
 * Return: 0
 */

int empty(char *buffer)
{
	int j;

	for (j = 0; buffer[j] != "\0"; j++)
	{
		if (buffer[j] != " ")
		{
			return (0);
		}
	}
	return (1);
}
