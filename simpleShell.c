#include "shell.h"

/**
 * main - Entry point for the simple shell
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	char *input;

	(void)argc;
	while (1)
	{
		displayPrompt();
		input = read_user_input();
		excutefunc(input, argv);
	}
	return (0);
}
