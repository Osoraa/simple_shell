#include "main.h"

/**
 * main - Program entry point.
 *
 * Return: 0 on success, 1 on error.
 */
int main(void)
{
	char *lineptr = NULL;
	size_t line_len = 0;
	int count;
	ssize_t len_read;

	write(STDOUT_FILENO, "$ ", 2);

	len_read = getline(&lineptr, &line_len, stdin);

	for (count = 0; count != '\n' && count < _strlen(lineptr); count++)
	{
		if (lineptr[count] == EOF)
			return (1);
	}

	write(STDOUT_FILENO, lineptr, len_read);
	free(lineptr);

	return (0);
}
