#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <stdbool.h>
#include <signal.h>

#define SIMPLE_SHELL
#define MAX_PATH 1024
#define COMMAND_LEN 1024

char *read_line();
char **split_line(char *line);
void shell_exec(char **args);
void shell_cd(char **args);
void shell_exit(char **args);
#endif
