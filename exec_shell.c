#include "main.h"

/**
* shell_exec - check code
* @args:arguements
* Return: line always
**/
void shell_exec(char **args)
{
	pid_t child_pid = fork();

	if (child_pid == 0)
	{
		execvp(args[0], args);
		perror("shell");
		exit(1);
	}
	else
	if (child_pid > 0)
	{
		int status;

		do {

			waitpid(child_pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	else
	{
		perror("shell");
	}
}

