#include "shell.h"

/**
 * argumentFunc - Print the number of arguments and their values.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 */
void argumentFunc(int argc, char *argv[])
{
	int idx = 0;

	_printf("%i: ", argc);
	while (argv[idx])
	{
		_printf("argv[%i]: %s\n", idx, argv[idx]);
		++idx;
	}
}

