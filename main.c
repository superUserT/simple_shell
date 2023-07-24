#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **argv)
{
	char *prompt = "(Tshell) $ ";
	char *lineptr;
	size_t n = 0;

	/* declaring void variables */
	(void)ac; (void)argv;

	while (1){
	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin);

	if (nchars_read == -1)
	{
            printf("Exiting....\n");
            return (-1);
	}
	printf("%s\n", lineptr);

	
	free(lineptr);
	}
	return (0);
}
