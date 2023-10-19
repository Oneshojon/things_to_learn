#include "shell.h"

/**
 * forkExample - Demonstrates the fork function.
 *
 * Return: Always 0.
 */
int forkExample(void)
{
	pid_t my_pid;
	pid_t pid;

	_printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	_printf("After fork\n");
	my_pid = getpid();
	_printf("My pid is %u\n", my_pid);
	return (0);
}
