#include "main.h"

/**
 *print_last_digit - checks for lowercase character.
 *@c: int
 *
 * On error: return 0
 * Return: 1 if success
 */
int print_last_digit(int c)
{
	int n;

	n = (c % 10);

	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar (n + '0');
	return (n);
}

