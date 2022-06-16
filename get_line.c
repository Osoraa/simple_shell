#include "main.h"

int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return (-1);
	}

	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		perror("fopen");
		return (-1);
	}

	while ((nread = getline(&line, &len, stream)) != -1)
	{
		printf("Retrieved line of length %lu:\n", nread);
		fwrite(line, nread, 1, stdout);
	}

	free(line);
	fclose(stream);
	return (0);
}
