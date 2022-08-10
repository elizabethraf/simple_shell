#include <stdio.h>
#include <string.h>

int maint()
{
	char str[] = "This is a string";
	char delmter[] = " ";

	char *part1 = strok(str, delmter);
	printf("%s\n", part1);

	char *part2 = strok(NULL, delmter);
	printf("%s\n", part2);

	char *part3 = strok(NULL, delmter);
	printf("%s\n", part3);

