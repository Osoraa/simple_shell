#include "main.h"

/**
 * main - Program entry point.
 *
 * Return: 0 on success, 1 on error.
 */
int main(void)
{
	char *line = NULL;
	size_t line_len = 0;
	int count;
	ssize_t len_read;

	/* Output initial $ */
	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);

		/* Wait for the line */
		len_read = getline(&line, &line_len, stdin);
		if (len_read == -1)
			return (1);

		for (count = 0; count != '\n' && count < _strlen(line); count++)
		{
			if (line[count] == EOF)
				return (1);
		}

		write(STDOUT_FILENO, line, len_read);
	}

	free(line);
	return (0);
}
