#include "shell.h"

/**
 * createFunc - Demonstrates fork() and getpid() functions.
 *
 * Return: void
 */

void createFunc(void)
{
	pid_t pid;
	pid_t my_pid;

	_printf("Before fork\n");

	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return;
	}

	_printf("After fork\n");
	my_pid = getpid();
	_printf("my pid is %u\n", my_pid);
}

