#include "shell.h"

/**
 *file_exists - Checks if a file exiistt in a path
 *@ac: Count of arguments
 *@av: array of pointers to arguments
 *
 *Return: 0 Seccess
 */
int file_exists(int ac, char **av)
{
	unsigned int i;
	struct stat st;

	if (ac < 2)
	{
		_printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	i = 1;

	while (av[i])
	{
		_printf("%s:", av[i]);
		if (stat(av[i], &st) == 0)
		{
			_printf(" Found\n");
		}
		else
		{
			_printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
