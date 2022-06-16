#include "main.h"

/**
 * print_number - Prints an integer to stdout using recursion.
 * @n: Number to print to stdout.
 *
 * Return: None.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	} else
		m = n;

	if (m < 10)
		_putchar(m % 10 + 48);
	else
	{
		print_number(m / 10);
		_putchar(m % 10 + 48);
	}
}
