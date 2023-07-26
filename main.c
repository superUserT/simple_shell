#include "main.h"
#define BUFSIZE_sh 32
#define PROMPT "#cisfun$ "

/**
 * main - Entry point
 * Return: return (0)
 */

int main(void)
{
	signal(SIGINT, sighandler);

	while (1)
	{
		char *st = PROMPT;

		print_shell(st);

		char *buffer = NULL;
		size_t bufsize = BUFSIZE_sh;
		int buf;

		buffer = (char *)malloc(bufsize * sizeof(char));

		if (buffer == NULL)
		{
			perror("Unable to allocate buffer");
			exit(1);
		}

		buf = getline(&buffer, &bufsize, stdin);

		if (buf == EOF)
		{
			write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}
		exit_shell(buffer);
		char **arrp = div_buffer(buffer);

		execute(arrp);

		if (arrp && arrp[0])
			env_shell(arrp);
	}
	return (0);
}
