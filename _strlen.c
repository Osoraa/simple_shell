#include "main.h"

/**
 * _strlen - Uses recursion to print the length od a given string.
 * @s: String to Find length.
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(++s));

	return (0);
}
