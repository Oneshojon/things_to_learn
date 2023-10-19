#include "shell.h"

/**
 * get_PID - Print process ID and parent process ID.
 *
 * Return: Always 0.
 */

int get_PID(void)
{
	pid_t my_pid;/* my_ppid;*/

	my_pid = getpid();
	/*my_ppid = getppid();*/
	_printf("%u\n", my_pid);
	/*_printf("%u\n", my_ppid);*/
	return (0);
}
