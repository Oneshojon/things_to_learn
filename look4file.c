#include "shell.h"

/**
 *look4file - checks if a file exists in a path
 *@argc: COunt of arguments
 *@argv: Array of pointers to arguments
 *
 *Return: 0 (Success)
 */
int look4file(int argc, char *argv[])
{
	char *path, fullpath[1024], *token;
	int i;

	if (argc < 2)
	{
		_printf("Usage: %s filename ...\n", argv[0]);
		return (1);
	}
	/*path env variable*/
	path = getEnv("PATH");
	if (path == NULL)
	{
		_printf("PATH environment variable is not arranged.\n");
		return (1);
	}
	token = strtok(path, ":");
	while (token != NULL)
	{
		for (i = 1; i < argc; i++)
		{
			snprintf(fullpath, sizeof(fullpath), "%s/%s",
					token, argv[i]);
			if (access(fullpath, F_OK) == 0)
			{
				_printf("%s\n", fullpath);
			}
		}
		token = strtok(NULL, ":");
	}
	return (0);
}
