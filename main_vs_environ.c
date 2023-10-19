#include "shell.h"

/**
 * compareEnv - compares the main and global env
 * @argc: count of arguments
 * @argv: Array of pointers to arguments
 * @env: Array of pointers to the local environment
 *
 * Return: 0 (success)
 */

int compareEnv(int argc, char *argv[], char *env[])
{
	(void)argc;
	(void)argv;
	_printf("Address of env: %p\n", env);
	_printf("Address of environ: %p\n", environ);

	if (env == environ)
	{
		_printf("env and environ points to the same array. \n");
	}
	else
	{
		_printf("env and environ do not point to the same array.\n");
	}
	return (0);
}
