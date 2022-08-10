#include "main.h"

int main(void)
{
	char *buffer = NULL;
	*copy_buffer = NULL;
	size_t n = 0;
	char *token;
	char *delim = "\n";
	int num_token = 0;
   	i = 0;
	char **argv;

	printf("$ ");
	getline(&buffer, &n, stdin);
	printf(">>>>>> %s\n", buffer);

	/* copy the content of buffer to copy_buffer */
	strcpy(bcopy,buffer, buffer);
	token = strtok(buffer, delim);
	while (token != NULL)
	{
		num_token++;
		token = strtok(NULL, delim);
	}
	num_token++;

	argv = malloc(sizeof(char *) * num_token);
	/* get the token and save them as arguements in argv */
	token = strtok(copy_buffer, delim);
	while(token != NULL)
	{
		/* allocate space for each token */
		argv[1] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i],token);

		/* for debuggingpurpose */
		printf(">>>>>> %s\n", argv[i]);
		/**************************************/
		i++;
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

}

