#include "main.h"

/**
* main - check the code
*
* Return: 0 always
**/
int main(void)
{
	char *linebuf = NULL;
	char **strpart = NULL;

	while (true)
	{
		printf("$ ");
		linebuf = read_line();
		strpart = split_line(linebuf);

		if (strpart[0] != NULL)
		{
			shell_exec(strpart);
		}

		free(strpart);
		free(linebuf);
	}
}
