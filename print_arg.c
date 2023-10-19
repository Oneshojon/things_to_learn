#include "shell.h"

/**
 * Print_arg - prints command line arguments
 * @argc: the number of command line arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0
 */
int Print_arg(int argc, char **argv)
{
	int i;

	(void)argc;

	for (i = 0; argv[i] != NULL; i++)
	{
		_printf("%s\n", argv[i]);
	}
	return (0);
}
