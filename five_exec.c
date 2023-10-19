#include "shell.h"

/**
 * exec5times - Demonstrates fork(), execve(), and wait() functions.
 *
 * Return: Always 0.
 */
int exec5times(void)
{
	pid_t myPid;
	char *const args[] = {"ls", "-l", "/tmp", NULL};
	int i, status;

	for (i = 0; i < 5; ++i)
	{
		myPid = fork();
		if (myPid == -1)
		{
			perror("fork\n");
			return (1);
		}
		if (myPid == 0)
		{
			_printf("Child %d executing ls -l /tmp:\n", i + 1);
			if (execve("/bin/ls", args, NULL) == -1)
			{
				perror("execve\n");
				return (1);
			}
		}
		else
		{
			wait(&status);
			_printf("Child %d exited with %d\n", i + 1,
			       WEXITSTATUS(status));
		}
	}
	return (0);
}
