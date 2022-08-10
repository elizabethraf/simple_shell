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

void simple_shell();
void type_prompt();
void clear();
void read_command(int* cm[], char *par[]);
size_t num_read;
char *strcpy (char *__restrict __dest, const char *__restrict __src);
