#include "main.h"


/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getppid();
	print_number(my_pid);
	_putchar('\n');
	return (0);
}
