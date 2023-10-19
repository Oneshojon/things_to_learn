#include "shell.h"

/**
 *pathDirectories - prints each directory contained in the environmental
 *variable PATH
 *
 *Return: Void
 */
void pathDirectories(void)
{
	char *path = getEnv("PATH");
	char *token;

	if (path == NULL)
	{
		_printf("No PATH environment variable.\n");
		return;
	}

	token = strtok(path, ":");
	while (token != NULL)
	{
		_printf("%s\n", token);
		token = strtok(NULL, ":");
	}
}
