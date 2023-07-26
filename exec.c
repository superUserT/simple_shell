#include "main.h"

/**
 * execute - function that executes a program and waits for input
 * @arrp: character type, pointer
 * Return: void
 */

void execute(char **arrp)
{
	pid_t pid;

	pid = fork();

	if (pid == 0)
	{
		execve(arrp[0], arrp, NULL);
		perror("error: Process child does not exist.");
		exit(1);
	}
	else
		wait(0);
}
