#include "main.h"

/**
* split_line - check code
* @line: checking line
* Return: line always
**/
char **split_line(char *line)
{
	int cap = 16;
	int len = 0;
	char **token = malloc(sizeof(char *) * cap);

	char *delim = " \t\r\n";
	char *part = strtok(line, delim);

	while (part != NULL)
	{
		token[len] = part;
		len++;

	if (len >= cap)
	{
		cap = (int) (cap * 1.5);
		token = realloc(token, cap * sizeof(char *));
	}

		part = strtok(NULL, delim);
	}

	token[len] = NULL;
	return (token);
}

