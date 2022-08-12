#include "main.h"

/**
* read_line - ckeck code
*
* Return: 0 always
**/
char *read_line()
{
	char *linebuf = NULL;
	size_t bufferlen = 0;

	if (getline(&linebuf, &bufferlen, stdin) == -1)
	{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}

	return (linebuf);
}

