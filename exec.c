#include "shell.h"
/**
 *free_memory - frees the memory used
 *@args: The array of strings
 *@input: Input from user
 *
 *Return: Nothing
 */
void free_memory(char **args, char *input)
{
	int i;

	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
	free(args);
	free(input);
}

/**
 * excutefunc - Demonstrates fork(), execve(), and wait() functions.
 *@input: Value
 * Return: Always 0.
 */
void excutefunc(char *input, char *argv[])
{
	pid_t child_pid;
	char **args =  str_tokenize(input);

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Fork error");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
	free_memory(args, input);
}
