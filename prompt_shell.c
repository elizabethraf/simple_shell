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

	getline(&linebuf, &bufferlen, stdin);
	return (linebuf);
}
