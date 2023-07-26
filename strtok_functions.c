#include "main.h"
#define DEL " "

/**
 *div_buffer - divides the buffer
 *@buffer: pointer to the buffer
 *Return: Always success
 */

char **div_buffer(char *buffer)
{
	char **arrp;
	int j = 0;

	arrp = malloc(sizeof(buffer));

	char *symbol = strtok(buffer, "\n");

	symbol = strtok(symbol, DEL);
	arrp[0] = symbol;
	j = 1;

	while (symbol)
	{
		symbol = strtok(NULL, DEL);
		arrp[j] = symbol;
		j++;
	}
	return (arrp);
}
