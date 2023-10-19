#include "shell.h"

/**
 *getEnv - Gets thr value of the environmet "name"
 *@name: The name whose value is to be found
 *
 *Return: The value of "name" in environment
 */

char *getEnv(const char *name)
{
	size_t name_len = strlen(name);
	char **env = environ;

	while (*env)
	{
		if (strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return ((*env) + name_len + 1);
		}
		env++;
	}
	return (NULL);
}
