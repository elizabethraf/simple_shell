#include "main.h"

/**
* main - check the code
*
* Return: 0 always
**/
void simple_shell()
{
	char* username;
    clear();
    printf("\n\n\n\n******************"
        "************************");
    printf("\n\n\n\t****MY SHELL****");
    printf("\n\n\t-USE AT YOUR OWN RISK-");
    printf("\n\n\n\n*******************"
        "***********************");
    username = getenv("USER");
    printf("\n\n\nUSER is: @%s", username);
    printf("\n");
    sleep(1);
    clear();
}

void read_command(int* cm[], char *par[])
{
	char line[1024];
	int count = 0, i = 0, a = 0;
	char *array[100], *len;

	for (;;)
	{
		int c = fgetc (stdin);
		line[count++] = (char) c;
		if (c == '\n') break;
	}
	if (count == 1)
			return;
	char* a = strtok(line, "\n");

	while (a != NULL)
	{array[i++] = strdup (a);
	a = strtok (NULL, "\n");
	}
	strcpy (cmd, array[0]);

	for (int len = 0; len < i; len++)
		par[len] = array[len];
	par[1] = NULL;
}

void type_prompt()
{
	static in first_time = 1;
	if (first_time)
	{
		const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
		write(STDOUT_FILENO, CLEAR_SCREEN_ANSI,12);
		first_time = 0;
	}
	printf("$");
}

int main()
{
	char cmd[100], command[100], paramaters[20];
	char *envp[] = { (char *) "PATH=/bin", 0};
	while (1)
	{
		type_prompt();
		read_command (command, parameters);
		if (fork() != 0)
			wait (NULL);
		else
		{
			strcpy (cmd, "/bin/");
			strcat (cmd, command);
			execve (cmd, parameters, envp);
		}
		if (strcmp (command, "exit") == 0)
			break;
	}
	return (0);
}
