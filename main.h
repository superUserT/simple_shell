#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

void env_shell(char **arrp);
int _strcmp(char *s1, char *s2);
void print_shell(char *s);
int _strlen(char *c);
void exit_shell(char *buffer);
extern char **environ;
char **div_buffer(char *buffer);
void execute(char **arrp);
void sigHandler(int num);

#endif /* MAIN_H */
