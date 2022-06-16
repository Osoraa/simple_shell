#include "main.h"

/**
 * main - Program entry point.
 *
 * @ac: Command line argument count.
 * @av: Command line arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i = 0;
	(void) ac;

	for (; av[i]; i++)
		write(STDOUT_FILENO, av[i], _strlen_recursion(av[i]));

	return (0);
}
