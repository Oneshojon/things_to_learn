#include "shell.h"

/**
 *read_user_input - Reads and prints user input line by line.
 *Return: char *
 */
char *read_user_input(void)
{
	char *command = NULL;
	ssize_t read_bytes;
	size_t len = 0;

	read_bytes = getline(&command, &len, stdin);

	if (read_bytes == -1)
	{
		if (feof(stdin))
		{
			_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
	}
	if (command[read_bytes - 1] == '\n')
	{
		command[read_bytes - 1] = '\0';
	}
	return (command);
}
