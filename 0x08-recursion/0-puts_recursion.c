#include "main.h"

/**
 * _puts_recursion- prints a string followed by a new line
 * @s: char
 */

void _puts_recursion(char *s)
{
	char c;

	while (*s)
	{
		c = *s;
		_putchar(c);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
