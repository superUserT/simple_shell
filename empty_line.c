#include "main.h"

/**
 * empty - Checks if a line exits or not
 * @buffer: the line to be checked
 * Return: 0
 */

int empty(char *buff)
{
	int j;

	for (j = 0; buff[j] != '\0'; j++)
	{
		if (buff[j] != ' ')
		{
			return (0);
		}
	}
	return (1);
}
