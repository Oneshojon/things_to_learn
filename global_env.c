#include "shell.h"

/**
 *mainenv - prints the environment using the global variable
 *
 *Return: 0 (Success)
 */

int mainenv(void)
{
	char **env = environ;

	for (; *env != NULL; env++)
	{
		_printf("%s\n", *env);
	}
	return (0);
}
