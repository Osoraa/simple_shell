#include "main.h"

/**
 * main - Program entry point
 *
 * Return: 0 on success, 1 on error.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child_pid;
	int status, count;

	for (count = 0; count < 5; count++)
	{
		child_pid = fork();
		if (child_pid == -1)
			return (1);

		if (!child_pid)
			execve(argv[0], argv, NULL);
		else
			wait(&status);
	}

	return (0);
}
