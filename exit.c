#include "shell.h"

/**
 * is_exit_command - Check if a string is "exit"
 * @command: The string to check
 *
 * Return: 1 if it's "exit", 0 otherwise
 */
int is_exit_command(const char *command)
{
	return (strcmp(command, "exit") == 0);
}
